CC = g++
CFLAGS = -Wall -g -c
LIB = 
cppSOURCES := $(wildcard *.cpp)
cppOBJS := $(patsubst %.cpp,%.o,$(cppSOURCES))
cppEXES := $(patsubst %.o,%.out,$(cppOBJS))

.PHONY:all

all:$(cppEXES)

%.out : %.o
	$(CC) $(LIB)  $< -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@

.PHONY:clean
clean :
	-rm *.o *.out
