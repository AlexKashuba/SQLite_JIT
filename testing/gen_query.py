import argparse
import subprocess
from definitions import PROJECT_DIR

ten_percent_bound = 250000000
entries = 100000000

def gen_query(n_tests=5, test_range=5, step=100, selectivity=0):

    if selectivity != 0:
        selectivity_test = "i<{} or".format(selectivity*ten_percent_bound)
        command = 'echo "select count(i) from test where i<{0};" | {1}/sqlite {1}/data/test.db '
        command = command.format(selectivity*ten_percent_bound, PROJECT_DIR)
        res = subprocess.run(command, shell=True, stdout=subprocess.PIPE)
        selection_n = round(int(res.stdout.decode('utf-8'))/entries*100, 3)
    else:
        selectivity_test = ""
        selection_n = 0

    begin = "select i from test where {}".format(selectivity_test)
    selection = ["(i<{} and i>{})".format(i, i+test_range) for i in range(1, n_tests*step, step)]
    selection = " or ".join(selection)
    query = begin + selection + ";"

    return query, selection_n

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("-n", help="number of tests", action="store", type=int, default=5)
    parser.add_argument("-r", help="test range", action="store", type=int, default=5)
    parser.add_argument("-s", help="step between tests", action="store", type=int, default=100)
    parser.add_argument("-l", help="selectivity", action="store", type=int, default=0)
    args = parser.parse_args()

    query = gen_query(args.n, args.r, args.s, args.l)
    print(query[0])
