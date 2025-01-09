HW += pc
include   hw/$(HW).mk
include  cpu/$(CPU).mk
include arch/$(ARCH).mk
include   os/$(OS).mk

CC  = $(TARGET)-gcc
CXX = $(TARGET)-g++
