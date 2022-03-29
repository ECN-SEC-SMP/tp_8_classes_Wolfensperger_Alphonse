machin.out : main.o animal.o lion.o ours.o pierre.o loup.o attaque.o
	g++ -o machin.out main.o animal.o lion.o ours.o pierre.o loup.o attaque.o
main.o : main.cpp
	g++ -c main.cpp
animal.o : animal.cpp
	g++ -c animal.cpp
lion.o : Animaux/lion.cpp
	g++ -c Animaux/lion.cpp
ours.o : Animaux/ours.cpp
	g++ -c Animaux/ours.cpp
pierre.o : Animaux/pierre.cpp
	g++ -c Animaux/pierre.cpp
loup.o : Animaux/loup.cpp
	g++ -c Animaux/loup.cpp
attaque.o : attaque.cpp
	g++ -c attaque.cpp