//compiler
CXX = g++
// c++ compiler flags
// -g: adds debugging information to the executable file
// - Wall turns on most, but not all, compiler warnings
// -std=C++ uses standard c++ 17
// put all the required flags seperated by space
CXXFLAGS = -c -g -Wall -std=c++17

// the build target executable file; .exe is not required
PROGRAM = ascii.exe 

// list .cpp files seperated by space

CPPFILES = ASCIIART.cpp

// make all rule/default rile that'll be tun when we run 'make'
// firt compile each file to object file
// then make a single binary program
all:
    $(CXX) $(CXXFLAGS) $(COPPFILES)
    $(CXX) -o $(PROGRAM) *.
// make clean rule 
// delete object and binary file
clean: rm -f $(PROGRAM) *.o