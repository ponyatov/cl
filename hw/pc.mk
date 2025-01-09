CPU ?= i5
OS  ?= linux

CFLAGS += -D$(shell echo $(HW)|tr a-z A-Z)
