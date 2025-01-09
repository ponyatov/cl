.PHONY: all run
all: bin/$(MODULE) $(S)
run: bin/$(MODULE) $(S)
	$^
