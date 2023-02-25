CXX := g++
CXXFLAGS := -g -Wall --std=c++11
VALGRIND := valgrind --tool=memcheck --leak-check=yes

all: llrec-test

llrec-test: llrec-test.o
	$(CXX) $(CXXFLAGS) -o $@ $^



llrec-test.o: llrec-test.cpp llrec.h 
	$(CXX) $(CXXFLAGS) -c -o $@ $<



clean:
	rm -f *.o llrec-test *~
.PHONY: clean 
