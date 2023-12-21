main :  main.o Date.o
	g++ main.o Date.o -o main

Date.o : Date.h Date.cpp 
	g++ -c Date.cpp

main.o : main.cpp Date.h
	g++ -c main.cpp 


