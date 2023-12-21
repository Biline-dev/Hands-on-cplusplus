main :  main.o Figure.o ../question1/Point.o
	g++ main.o Figure.o ../question1/Point.o -o main

Figure.o : Figure.h Figure.cpp ../question1/Point.h 
	g++ -c Figure.cpp

Point.o : ../question1/Point.h ../question1/Point.cpp 
	g++ -c ../question1/Point.cpp

main.o : main.cpp Figure.h
	g++ -c main.cpp 


