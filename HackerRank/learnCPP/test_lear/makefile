main :  main.o A.o  B.o C.o
	g++ main.o A.o B.o C.o  -o main

A.o : A.h A.cpp 
	g++ -c A.cpp

B.o : B.h B.cpp A.h C.h 
	g++ -c B.cpp

C.o : C.h C.cpp 
	g++ -c C.cpp

main.o : main.cpp A.h  B.h  C.h 
	g++ -c B.cpp
	g++ -c main.cpp 


