# SQLite_JIT

## Building all versions
Run `make` from the top directory of the project.

## Building a particular version
Run `make` from the directory of the relevant version.

## Running the experiments
Run `make experiments` to run all the experiments from the paper.
The command will produce three files with the measurements in the `results` directory and three images in the `img` directory.

Run `make A` to run experiment A. The same applies for other experiments.
## Dependencies
The experiments require the following python3 packages:
* `seaborn`
* `scikit-learn`

Bulding the templates requires `pycparser`.
