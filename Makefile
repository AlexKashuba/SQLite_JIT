include vars.mk

VERSIONS = sqlite sqlite_jit sqlite_disp sqlite_spec sqlite_jit_spec
VERSIONS_DIR = $(PROJECT_ROOT)/versions
COMMANDS = all clean clean-all debug
TMP_DIRS = $(BIN_DIR) $(PROJECT_ROOT)/img $(PROJECT_ROOT)/results

all: $(TMP_DIRS) 
	for v in $(VERSIONS_DIR)/*; do cd $$v && $(MAKE); done;

$(TMP_DIRS):
	mkdir -p $@

EXPERIMENTS = A B C

experiments: $(EXPERIMENTS) 
$(EXPERIMENTS): data/test.db #$(VERSIONS)
	python3 testing/measure_overhead.py $@ -n 1 -r 1 | xargs python3 testing/make_plot.py $@ -f

data/test.db: data/data.txt 
	$(BIN_DIR)/sqlite data/test.db < data/import_data.txt

data/data.txt:
	python3 data/gen_data.py

#sqlite%:
#	cd $(VERSIONS_DIR)/$@ && $(MAKE)

uninstall:
	rm -rf $(TMP_DIRS)	
	for v in $(VERSIONS_DIR)/*; do cd $$v && $(MAKE) $@; done;

$(COMMANDS):
	for v in $(VERSIONS_DIR)/*; do cd $$v && $(MAKE) $@; done;

.PHONY: $(COMMANDS) uninstall
