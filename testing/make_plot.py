import matplotlib
matplotlib.use('Agg')
import pandas as pd
import numpy as np
import seaborn as sns
import sklearn.linear_model
import re
import argparse
from matplotlib import pyplot as plt
from pathlib import Path

PROJECT_DIR = str(Path(__file__).resolve().parent.parent)

sns.set()
sns.set_context("paper", font_scale=1.7)
sns.set_style("whitegrid", {
        "font.family": "serif",
        "font.serif": ["Times", "Palatino", "serif"],
})
sns.set_palette("colorblind")

def get_df(file_path):
    df = pd.read_csv(file_path)
    df['total'] = df['user']+df['system']
    df['elapsed'] = df['elapsed'].apply(lambda x: float(x.split(':')[1]))
    return df

def add_line(df, type_str, x, y, name, marker):
    vals = df[df['type'] == type_str][[x,y]]
    regr = sklearn.linear_model.LinearRegression()
    regr.fit(vals[x].values.reshape(-1, 1), vals[y].values.reshape(-1, 1))
    baseline_label = name + ' (slope={})'.format(round(regr.coef_[0][0], 3))
    return sns.regplot(x=vals[x], y=vals[y], x_estimator=np.mean, truncate=True, label=baseline_label, marker=marker) #, scatter_kws={"s": 30})

def make_plot(df, x, y, baseline='sqlite', jit='sqlite_jit'):
    f = plt.figure(num=None, figsize=(7, 4.5), dpi=100)
    add_line(df, baseline, x, y, "Baseline", "X")
    ax = add_line(df, jit, x, y, "JIT", "s")

    return ax, f

def make_spec_plot(df, y = 'total', title=''):
    ax, f = make_plot(df, 'jitops', y, baseline='sqlite_spec', jit='sqlite_jit_spec')
    xlim_max = max(df['jitops'])+5
    ylim_max = max(df[y])+1

    ax.set(xlim=(-1,xlim_max), ylim=(-1,ylim_max))
    ax.set_title(title)
    ax.set_ylabel('CPU Time (s)')
    ax.set_xlabel('Number of jitted operations')
    plt.legend(frameon=True)
    return f

def make_general_plot(df, y = 'total', title=''):
    x = 'jitops'
    ax, f = make_plot(df, x, y)
    ax = add_line(df, "sqlite_disp", x, y, "Threaded", 'D')

    compile_time = df.loc[df['type'] == 'sqlite_jit']['compile_time']
    x_jit = df.loc[df['type'] == 'sqlite_jit']['jitops']
    regr = sklearn.linear_model.LinearRegression()
    regr.fit(x_jit.values.reshape(-1, 1), compile_time.values.reshape(-1, 1))
    compile_label = 'Compilation (slope={})'.format(round(regr.coef_[0][0], 3))
    sns.regplot(x=x_jit, y=compile_time, x_estimator=np.mean, truncate=True, label=compile_label, marker='o')
    

    xlim_max = max(df['jitops'])+5
    ylim_max = max(df[y])+3

    ax.set(xlim=(-1,xlim_max), ylim=(-1,ylim_max))
    ax.set_title(title)
    ax.set_ylabel('CPU Time (s)')
    ax.set_xlabel('Number of jitted operations')
    plt.legend(frameon=True)
    return f


def make_selectivity_plot(df, y = 'total', title=''):
    x = 'selectivity'
    ax, f = make_plot(df, x, y)
    ax = add_line(df, "sqlite_disp", x, y, "Threaded", 'D')
    xlim_max = max(df['selectivity'])
    xlim_max += int(xlim_max*0.1)
    ylim_max = max(df[y])
    ylim_max += int(ylim_max*0.2)
    
    ax.set(xlim=(-10,xlim_max), ylim=(0,ylim_max))
    ax.set_ylabel('CPU Time (s)')
    ax.set_xlabel('Percent of selected entries')
    plt.legend(frameon=True)

    return f

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument("experiment", help="which experiment to run: a|A, b|B, c|C", action='store')
    parser.add_argument("-f", help="input file with the measurements", action='store')
    args = parser.parse_args()
    df = get_df(args.f)
    name = args.f.split('/')[-1]
    if args.experiment.lower() == 'a':
        f = make_general_plot(df) 
    elif args.experiment.lower() == 'b':
        f = make_selectivity_plot(df)
    elif args.experiment.lower() == 'c':
        f = make_spec_plot(df)
        
    file_path = PROJECT_DIR+"/img/{}.pdf".format(name)
    f.savefig(file_path, bbox_inches='tight')
    print(file_path)
