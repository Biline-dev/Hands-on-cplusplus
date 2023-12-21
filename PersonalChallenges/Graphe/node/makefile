main :  main.o Noeud.o ../arrete/Arrete.o
	g++ main.o Noeud.o ../arrete/Arrete.o -o main

Arrete.o : Arrete.h Arrete.cpp 
	g++ -c Arrete.cpp

Noeud.o : Noeud.h Noeud.cpp  ../arrete/Arrete.h 
	g++ -c Noeud.cpp

main.o : main.cpp Noeud.h ../arrete/Arrete.h 
	g++ -c main.cpp 

