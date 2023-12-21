main :  main.o Graphe.o ../arrete/Arrete.o ../node/Noeud.o
	g++ main.o Graphe.o ../arrete/Arrete.o ../node/Noeud.o -o main

Graphe.o : Graphe.h Graphe.cpp  ../node/Noeud.h 
	g++ -c Graphe.cpp

Arrete.o : Arrete.h Arrete.cpp 
	g++ -c Arrete.cpp

Noeud.o : Noeud.h Noeud.cpp  ../arrete/Arrete.h 
	g++ -c Noeud.cpp

main.o : main.cpp Graphe.h ../node/Noeud.h  ../arrete/Arrete.h
	g++ -c main.cpp 

