main :  main.o ../question2/Figure.o ../question1/Point.o ../question3/Quadrilatere.o ../question3/Triangle.o
	g++ main.o ../question2/Figure.o ../question1/Point.o ../question3/Quadrilatere.o ../question3/Triangle.o -o main

Figure.o : ../question2/Figure.h ../question2/Figure.cpp ../question1/Point.h 
	g++ -c ../question2/Figure.cpp

Point.o : ../question1/Point.h ../question1/Point.cpp 
	g++ -c ../question1/Point.cpp

Quadrilatere.o : ../question3/Quadrilatere.h ../question3/Quadrilatere.cpp ../question2/Figure.h
	g++ -c ../question3/Quadrilatere.cpp

Triangle.o : ../question3/Triangle.h ../question3/Triangle.cpp ../question2/Figure.h
	g++ -c ../question3/Triangle.cpp

main.o : main.cpp ../question3/Quadrilatere.h ../question3/Triangle.h ../question2/Figure.h ../question1/Point.h 
	g++ -c main.cpp 


