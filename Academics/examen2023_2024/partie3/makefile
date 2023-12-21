main :  main.o ../partie2/Evenement.o ../partie1/Date.o Concert.o 
	g++ main.o ../partie2/Evenement.o  ../partie1/Date.o Concert.o -o main

Date.o : ../partie1/Date.h ../partie1/Date.cpp 
	g++ -c ../partie1/Date.cpp

Evenement.o : ../partie2/Evenement.h ../partie2/Evenement.cpp  ../partie1/Date.h
	g++ -c ../partie2/Evenement.cpp

Concert.o : Concert.h Concert.cpp  ../partie2/Evenement.h
	g++ -c Concert.cpp

main.o : Concert.h ../partie2/Evenement.h ../partie1/Date.h main.cpp 
	g++ -c main.cpp 


