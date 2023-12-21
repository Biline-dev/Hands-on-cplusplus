#include "Arbre.h"
#include <vector>
#include <stack>
#include <queue>

using namespace std;

Arbre::Arbre() {
   _nbsommets=0;
   _racine=-1;
}

Arbre::Arbre(const int n,const int r,const vector<vector<int>> f) {
   _nbsommets=n;
   _racine=r;
   _fils=f;
}


Arbre::~Arbre() {
}

vector<int> Arbre::parcoursLargeur() const {
    vector<int> parcours;
    queue<int> file;
    if (_racine != -1) { 
		file.push(_racine);
		parcours.push_back(_racine);

		while(!file.empty()){
			int noeudCourant = file.front();
			file.pop();
			for(int i=0; i<_fils[noeudCourant].size(); i++){
				int filsCourant = _fils[noeudCourant][i];
                parcours.push_back(filsCourant);
				if(_fils[_fils[noeudCourant][i]].size()>0){
					file.push(_fils[noeudCourant][i]);
				}
			}
		}  
    }
    return parcours;
}

vector<int> Arbre::parcoursProfondeur() const {
    vector<int> parcours;
    stack<int> pile;

    if(_racine!=-1){
		pile.push(_racine);
		while(!pile.empty()){
			int noeudCourant = pile.top();
			pile.pop();
			parcours.push_back(noeudCourant);

			for(int i=_fils[noeudCourant].size()-1; i>=0; i--){
				pile.push(_fils[noeudCourant][i]);
			}
		}
	}
    return parcours;
}



// mthode qui affiche la liste des fils de chaque sommet d'un arbre
ostream & operator<<(ostream&os,const Arbre&a){

	os << "racine " << a._racine << endl;
	int n=a._nbsommets;
	for (int i = 0; i < n; i++){

		// afficher le num�ro du sommet
		os << "sommet " << i << " a pour fils --> ";

		// afficher tous les fils du sommet i
		for (int v: a._fils[i]) {
			os << v << " ";
		}
		os << endl;
	}
	//os << "im sad" << endl;

        return os;
}


