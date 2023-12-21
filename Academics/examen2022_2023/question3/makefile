main :  main.o ../question2/Figure.o ../question1/Point.o Quadrilatere.o Triangle.o
	g++ main.o ../question2/Figure.o ../question1/Point.o Quadrilatere.o Triangle.o -o main

../question2/Figure.o : ../question2/Figure.h ../question2/Figure.cpp ../question1/Point.h 
	g++ -c ../question2/Figure.cpp

Point.o : ../question1/Point.h ../question1/Point.cpp 
	g++ -c ../question1/Point.cpp

Quadrilatere.o : Quadrilatere.h Quadrilatere.cpp ../question2/Figure.h
	g++ -c Quadrilatere.cpp

Triangle.o : Triangle.h Triangle.cpp ../question2/Figure.h
	g++ -c Triangle.cpp

main.o : main.cpp Quadrilatere.h Triangle.h
	g++ -c main.cpp 


