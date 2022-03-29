machin.out : animal.o
	g++ -o machin.out  animal.o
animal.0 : animal.cpp
	g++ -c animal.cpp