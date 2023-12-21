#makefile

main: File.o  File.o  main.o 
		g++ File.o File.o  main.o -o main

File.o: File.h File.cpp 
		g++ -c File.cpp

main.o: File.h File.h  main.cpp 
		g++ -c main.cpp
