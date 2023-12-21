main :  main.o Point.o
	g++ main.o Point.o -o main

Point.o : Point.h Point.cpp 
	g++ -c Point.cpp

main.o : main.cpp Point.h
	g++ -c main.cpp 


