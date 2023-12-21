main:       ../personne/Personne.o  ../enseignant/Enseignant.o ../chercheur/Chercheur.o  Population.o main.o 
		g++ ../personne/Personne.o ../enseignant/Enseignant.o ../chercheur/Chercheur.o Population.o  main.o -o main
		
Personne.o: ../personne/Personne.h ../personne/Personne.cpp
		g++ -c ../personne/Personne.cpp 

Enseignant.o: ../enseignant/Enseignant.h ../enseignant/Enseignant.cpp ../personne/Personne.h
		g++ -c ../enseignant/Enseignant.cpp

chercheur.o: ../chercheur/Chercheur.h ../chercheur/Chercheur.cpp ../personne/Personne.h
		g++ -c ../chercheur/Chercheur.cpp

Population.o : Population.h Population.cpp  ../personne/Personne.h
	g++ -c Population.cpp

main.o: ../personne/Personne.h ../etudiant/Etudiant.h ../enseignant/Enseignant.h ../chercheur/Chercheur.h Population.h main.cpp 
		g++ -c main.cpp
