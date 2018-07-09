import datetime
import subprocess
import re
from gen_query import gen_query
import argparse
import logging
from definitions import PROJECT_DIR

HEADER = "jitops,user,system,elapsed,cpu,compile_time,type,selectivity\n"
JIT = "sqlite_jit"
DISPATCH = "sqlite_disp"
BASELINE = "sqlite"
JIT_SPEC = "sqlite_jit_spec"
BASELINE_SPEC = "sqlite_spec"
logger = logging.getLogger("measure")

def get_args():
    parser = argparse.ArgumentParser()
    parser.add_argument("test", help="the experiment to run: A | B | C | all", action="store", default='general')
    parser.add_argument("-n", help="number of tests", action="store", type=int, default=5)
    parser.add_argument("-r", help="number of repetitions", action="store", type=int, default=5)
    parser.add_argument("--debug", help="enable debug prints", action="store_const", const=True, default=False)

    return parser.parse_args(), parser

def run_test(query, name):
    path = PROJECT_DIR + '/bin/' + name
    command = '/usr/bin/time -f "%U,%S,%E,%P" /bin/bash -c \'echo "{}" | {} {}/data/test.db \''
    command = command.format(query, path, PROJECT_DIR)

    if args.debug:
        logger.info(command)

    try:
        res=subprocess.run(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, check=True)
        res_str = res.stderr.decode('utf-8')
    except subprocess.CalledProcessError as e:
        print(e)
        print(e.output)
        exit(1)

    
    compile_time = '0'
    jit_ops = -1
    if name == JIT:
        jit_ops = int(re.match("jitted ops: (\d+)", res_str).group(1))
        res_str = re.sub('jitted ops: \d+, ', '', res_str)

        compile_command = '/usr/bin/time -f "%U %S" bash -c "cc /tmp/jitted_func.c -O2 -o /tmp/dummy_obj.so -I{0}/src -I{0}/versions/sqlite_jit/jitsrc -lsqlite -L{0}/versions/sqlite_jit/lib/ -fPIC -shared"'.format(PROJECT_DIR)
        compile_res = subprocess.run(compile_command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, check=True)
        compile_time = str(round(sum(map(float, compile_res.stderr.decode('utf-8').split())), 3))

    res_str = res_str.strip()
    res_str = ",".join([res_str, compile_time, name])
    return res_str, jit_ops

def run_test_versions(f, n_query_tests, versions, selectivity=0):
    query, selection = gen_query(n_tests=n_query_tests, selectivity=selectivity)
    jit_ops = 0

    for version in versions:
        res, new_jit_ops = run_test(query, version)
        jit_ops = max(jit_ops, new_jit_ops)
        f.write("{},{},{}\n".format(jit_ops, res,selection))
    
def run_general_tests(versions):
    f, file_name = get_file("general")
    f.write(HEADER)
    j = 1
    for i in range(1, n_tests*3+1, 3):
        logger.info("test: {}/{}".format(j, n_tests))
        j+=1
        for repetition in range(repetitions):
            logger.info("{}/{}".format(repetition+1, repetitions))
            run_test_versions(f, i, versions)
    f.close()
    print(file_name)

def run_selectivity_tests():
    n_query_tests = 30
    n_select_range = 10
    name = "select"
    f, file_name = get_file(name)
    f.write(HEADER)
    j = 1
    versions = [JIT, BASELINE, DISPATCH]
    for i in range(n_select_range):
        logger.info("test: {}/{}".format(j, n_select_range))
        j+=1
        for repetition in range(repetitions):
            logger.info("{}/{}".format(repetition+1, repetitions))
            run_test_versions(f, n_query_tests, versions, i)
    f.close()
    print(file_name)

def get_file(name="result"):
    time = str(datetime.datetime.now().time()).replace(':', '').replace('.', '')
    file_name = "{}/results/{}_{}".format(PROJECT_DIR, name, time)
    f = open(file_name, 'w')
    return f, file_name


args, parser = get_args()
repetitions = args.r
n_tests = args.n
args.test = args.test.upper()
if args.test == 'A':
    run_general_tests([JIT, BASELINE, DISPATCH])
elif args.test == 'B':
    run_selectivity_tests()
elif args.test == 'C':
    run_general_tests([JIT_SPEC, BASELINE_SPEC])
elif args.test == 'all':
    run_general_tests([JIT, BASELINE, DISPATCH])
    run_selectivity_tests()
    run_general_tests([JIT_SPEC, BASELINE_SPEC])
else:
    logger.error("No such command: {}".format(args.test))
    parser.print_help()
