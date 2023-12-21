all: genere

CCFLAGS=-pedantic -W -Wall -Werror

clear:
	rm -f a.out *.o core *.exe *.exe.stackdump genere
clean:
	rm -f a.out *.o core *.exe *.exe.stackdump genere

genere: genere.cpp
	g++ $(CCFLAGS) genere.cpp -o genere
