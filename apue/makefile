CC = gcc
CFLAGS = -Wall -g -c -std=c99
SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))
EXES := $(patsubst %.o,%.out,$(OBJS))

.PHONY:all

all:$(EXES)

%.out : %.o
	$(CC) $< -o $@
%.o: %.c
	$(CC) $< $(CFLAGS) -o $@

.PHONY:clean
clear :
	-rm *.o *.out
