main :  main.o ../partie2/Evenement.o ../partie1/Date.o ../partie3/Concert.o 
	g++ main.o ../partie2/Evenement.o  ../partie1/Date.o ../partie3/Concert.o -o main

Date.o : ../partie1/Date.h ../partie1/Date.cpp 
	g++ -c ../partie1/Date.cpp

Evenement.o : ../partie2/Evenement.h ../partie2/Evenement.cpp  ../partie1/Date.h
	g++ -c ../partie2/Evenement.cpp

Concert.o : ../partie3/Concert.h ../partie3/Concert.cpp  ../partie2/Evenement.h
	g++ -c ../partie3/Concert.cpp

main.o : ../partie3/Concert.h ../partie2/Evenement.h ../partie1/Date.h main.cpp 
	g++ -c main.cpp 


