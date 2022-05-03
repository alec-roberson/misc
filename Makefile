CXX = g++
FLAGS = -std=c++14 -Wall -Wextra -Wpedantic


test: test.o child.o parent.o
	$(CXX) $(FLAGS) -o test test.o child.o parent.o
test.o: test.cpp child.hpp parent.hpp
	$(CXX) $(FLAGS) -c test.cpp -o test.o
child.o: child.cpp parent.hpp child.hpp
	$(CXX) $(FLAGS) -c child.cpp -o child.o
parent.o: parent.cpp parent.hpp
	$(CXX) $(FLAGS) -c parent.cpp -o parent.o
clean:
	rm -r -f *.o test
