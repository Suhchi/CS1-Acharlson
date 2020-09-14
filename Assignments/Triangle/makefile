CXX = g++
# compiler name

CXXFLAGS = -c -g -Wall -std=c++17
# ---- c++ compiler flags ----
# -g: adds debugging information to the executable file
# -Wall: turns on most, but not all, compiler warnings
# -std=C++17: uses c++ standard
# all falgs must be space sperated

PROGRAM = triangle.exe
# the build targer exe file; .exe is not required

CPPFILE = main.cpp
# list .cpp files seperated by space

all:
		$(CXX) $(CXXFLAGS) $(CPPFILES)
		$(CXX) -o $(PROGRAM) *.o 
# make all rule/default rule that'll be run when we run "make"
# first compile each file to object file
# then make a single binary program

clean:
		rm -f $(PROGRAM) *.o
# make clean rule
# delete object and binary files