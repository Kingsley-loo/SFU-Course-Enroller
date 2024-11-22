all: test

test: Testing.o User.o Course.o
	g++ -Wall -o test Testing.o User.o Course.o

Testing.o: Testing.cpp User.h Course.h
	g++ -Wall -c Testing.cpp

User.o: User.h User.cpp
	g++ -Wall -c User.cpp

Course.o: Course.h Course.cpp
	g++ -Wall -c Course.cpp

clean:
	rm -f test *.o