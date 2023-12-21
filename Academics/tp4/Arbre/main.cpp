#include <iostream>
#include "Arbre.h"

using namespace std;

int main(){
	// l'arbre du dessin 1
	Arbre arbre1(8,0,
	  {
	     {1,2,3}, {4}, {5}, {}, {},
             {6,7}, {}, {}
          }
	);

	// affichage de l'arbre : affichage de chaque fils de chaque sommet
    //cout << "liste des sommets et de leurs fils :" << endl;
	cout << arbre1 << endl;

	vector<int> parcours_Largeur= arbre1.parcoursLargeur();
	vector<int> parcours_Profondeur= arbre1.parcoursProfondeur();

	for(int i=0; i< parcours_Largeur.size(); i++){
		cout << parcours_Largeur[i] << " ";
	}

	cout << endl;

	for(int i=0; i< parcours_Profondeur.size(); i++){
		cout << parcours_Profondeur[i] << " ";
	}

	cout << endl;
        
	return 0;
}
