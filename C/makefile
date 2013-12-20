CC = gcc
CPP = g++
CFLAGS = -Wall -g -c -std=c99
CPPFLAGS = -Wall -g -c
LIB = -pthread
cSOURCES := $(wildcard *.c)
cOBJS := $(patsubst %.c,%.o,$(cSOURCES))
cppSOURCES := $(wildcard *.cpp)
cppOBJS := $(patsubst %.cpp,%.o,$(cppSOURCES))

cEXES := $(patsubst %.o,%.out,$(cOBJS))
cppEXES := $(patsubst %.o,%.out,$(cppOBJS))

.PHONY:all

all:$(cEXES) $(cppEXES)

%.out : %.o
	$(CC) $(LIB)  $< -o $@

%.o: %.c
	$(CC)  $(CFLAGS) $< -o $@

%.o: %.cpp
	$(CPP) $(CPPFLAGS) $< -o $@

.PHONY:clean
clean :
	-rm *.o *.out
