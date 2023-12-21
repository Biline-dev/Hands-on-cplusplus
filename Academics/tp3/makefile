#makefile

main:       personne/Personne.o etudiant/Etudiant.o enseignant/Enseignant.o chercheur/Chercheur.o ensChercheur/EnsChercheur.o main.o 
		g++ personne/Personne.o etudiant/Etudiant.o enseignant/Enseignant.o chercheur/Chercheur.o ensChercheur/EnsChercheur.o main.o -o main
		
Personne.o: personne/Personne.h personne/Personne.cpp
		g++ -c personne/Personne.cpp 

Etudiant.o: etudiant/Etudiant.h etudiant/Etudiant.cpp personne/Personne.h
		g++ -c etudiant/Etudiant.cpp
		
Enseignant.o: enseignant/Enseignant.h enseignant/Enseignant.cpp personne/Personne.h
		g++ -c enseignant/Enseignant.cpp

chercheur.o: chercheur/Chercheur.h chercheur/Chercheur.cpp personne/Personne.h
		g++ -c chercheur/Chercheur.cpp

EnsChercheur.o: ensChercheur/EnsChercheur.h ensChercheur/EnsChercheur.cpp chercheur/Chercheur.h enseignant/Enseignant.h personne/Personne.h
		g++ -c ensChercheur/EnsChercheur.cpp

main.o: personne/Personne.h etudiant/Etudiant.h enseignant/Enseignant.h chercheur/Chercheur.h ensChercheur/EnsChercheur.h main.cpp 
		g++ -c main.cpp
