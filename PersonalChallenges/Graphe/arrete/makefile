main :  main.o Arrete.o
	g++ main.o Arrete.o -o main

Arrete.o : Arrete.h Arrete.cpp 
	g++ -c Arrete.cpp

main.o : main.cpp Arrete.h
	g++ -c main.cpp 

