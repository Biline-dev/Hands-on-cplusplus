main :  main.o ../partie1/Date.o Evenement.o ../partie1/Date.o
	g++ main.o ../partie1/Date.o  Evenement.o -o main


Evenement.o : Evenement.h Evenement.cpp  ../partie1/Date.h
	g++ -c Evenement.cpp

main.o : Evenement.h ../partie1/Date.h main.cpp 
	g++ -c main.cpp 


