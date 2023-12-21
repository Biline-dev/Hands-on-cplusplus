#makefile


main: Fraction.o main.o
		g++ Fraction.o main.o -o main

Fraction.o: Fraction.h Fraction.cpp
		g++ -c Fraction.cpp

main.o: Fraction.h main.cpp
		g++ -c main.cpp

		