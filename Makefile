machin.out : main.o animal.o
	g++ -o machin.out  main.o animal.o
main.0 : main.cpp
	g++ -c main.cpp
animal.0 : animal.cpp
	g++ -c animal.cpp
