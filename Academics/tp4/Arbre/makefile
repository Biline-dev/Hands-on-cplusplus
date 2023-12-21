main :  main.o Arbre.o
	g++ main.o Arbre.o -o main

Arbre.o : Arbre.h Arbre.cpp ../File/File.cpp ../File/File.h
	g++ -c Arbre.cpp

main.o : main.cpp Arbre.h
	g++ -c main.cpp 




