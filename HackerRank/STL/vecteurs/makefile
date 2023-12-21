#makefile


main: Vecteurs.o main.o
		g++ Vecteurs.o main.o -o main

Vecteurs.o: Vecteurs.h Vecteurs.cpp
		g++ -c Vecteurs.cpp

main.o: Vecteurs.h Vecteurs.cpp main.cpp
		g++ -c main.cpp

		