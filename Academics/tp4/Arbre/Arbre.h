#ifndef _ARBRE_H_
#define _ARBRE_H_

#include <iostream>
#include <vector>
#include "../File/File.cpp"
#include "../File/File.h"
using namespace std;

class Arbre {
   private :
      int _nbsommets;
	   int _racine;
	   vector<vector<int>> _fils;
   public :
      Arbre();
      Arbre(const int nbs,const int r,const vector<vector<int>> f);
      virtual ~Arbre();
      vector<int> parcoursLargeur() const;
      vector<int> parcoursProfondeur() const;
      friend ostream& operator<<(ostream &os,const Arbre&a);
};

#endif

