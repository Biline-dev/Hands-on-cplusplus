#include "../personne/Personne.h"
#include "../etudiant/Etudiant.h"
#include "../enseignant/Enseignant.h"
#include "../chercheur/Chercheur.h"
#include "../ensChercheur/EnsChercheur.h"
#include "Population.h"
#include <iostream>
#include <vector>

using namespace std;




int main(){

    vector<int*>  tab;
    int b = 30;
    int* a = new int;
    *a = b;
    tab.push_back(a);
    cout << *tab[0]<<endl;
    delete a;

    Population p1({ new Personne(195, "aaa", "aa"), 
                    new Chercheur("machine learning"), new Enseignant()});
    Population p2;

    cout << *p1.getstaff()[1] << endl;
    //p2=p1; // still don't know how it works
    return 0;
}