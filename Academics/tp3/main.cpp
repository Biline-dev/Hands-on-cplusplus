#include <iostream>
#include <vector>
#include "personne/Personne.h"
#include "etudiant/Etudiant.h"
#include "enseignant/Enseignant.h"
#include "chercheur/Chercheur.h"
#include "ensChercheur/EnsChercheur.h"
using namespace std;



int main(void){


    Chercheur c1(Personne(195, "aaa", "aa"), "machine learning");
    Chercheur c2;

    c2 = c1;

    cout << c2 << endl;




    Personne personne[3];

    Personne* aP1 = new Chercheur("ml/dl");
    Chercheur aE1("ml/dl");
    Enseignant aEns1(12, 9);
    Chercheur* ech = new EnsChercheur(199, "Beline", "BL", "machine learning", 12, 3);
    //Personne* ech1 = new EnsChercheur();  c'est faut!


    //ech->Enseignant::similaire();
    ech->Chercheur::similaire();   
    ech->similaire();

    /*vector<Personne*>  tab;   // il faut travailler avec des pointeurs pour pouvoir avoir plusieur type

    tab.push_back(new Personne(1999, "AA", "AAAA"));
    cout << *tab[0];*/

   /* cout << "Personne" <<endl;
    cin >> aP1;
    personne[0] = aP1;
    cout << "operation terminée!" <<endl;*/

/*
    cout << "Chercheur" <<endl;
    cin >> aE1;
    personne[1] = aE1;
    cout << "operation terminée!"<<endl;*/

/*
    cout << "Enseignant" <<endl;
    cin >> aEns1;
    personne[2] = aEns1;
    cout << "operation terminée!"<<endl;*/

    /*for(int i=0; i<3; i++){
        cout << personne[i];
    }*/

   /* vector<Personne*> vecteur_personne;
    vecteur_personne.push_back(&aE1);
    cout << *vecteur_personne[0];*/
    
/*
    vector<Personne> vecteur_personne;
    //vecteur_personne.push_back(&aP1);
    vecteur_personne.push_back(aE1);
    //vecteur_personne.push_back(&aEns1);
    cout << vecteur_personne[0];*/
/*
    vector<Personne*>  tab;

    tab.push_back(new Personne(1999, "AA", "AAAA"));
    cout << *tab[0];*/

}



















   /* Personne p1(12, "aeline", "bl");
    Personne p2(12, "beline", "bl");
    Personne p3;
    Enseignant en1(p1, 4,5);
    Chercheur en2(p1, "math");
    /*Chercheur c1;
    cin >> c1;
    cout << c1;
    EnsChercheur  ens1;
    EnsChercheur  ens2(p1, en1, en2);

    cout << ens2;

    */

    //cout << en1 << endl;

    //cin >> en2;

    //cout << en2 << endl;
    //cin >> p3;
    //cout << p3 << endl;
    //p3=p2;
    //cout << p3 << endl;
    //Etudiant e1(p1, 12, 13);
    //Etudiant e2(p1, 12, 13);

   /* if(e1==e2){
        cout << "weeesh"<< endl;
    }*/
    //e2 = e1;

    //cin >> e2;
    //cout << e2 << endl;

    //Personne p2;
    //cin >> p2;
    //cout << p2;

   // cout << p2==p1 << endl; // it wont work cause << is more prior
   // cout << p2!=p1 << endl;