                   // Fichier genere avec ./genere Noeud
#ifndef _NOEUD_H_
#define _NOEUD_H_

#include <iostream>
#include <vector>
#include "../arrete/Arrete.h"

using namespace std;

class Noeud
{
   friend ostream& operator<<(ostream& os, const Noeud& aN);

 public :

   // Allocateurs/Desallocateurs

            Noeud( /* ### */ );
            Noeud(const Noeud& aN);
            Noeud& operator=(const Noeud& aN);
            Noeud(const int id_node, const vector<Arrete> voisins);
            void setVoisins(const vector<Arrete> voisins);
            void setIdNode(const int id_node);
            void setVisited(const bool visited);
            void setDistanceFromStart(const double distance);
            vector<Arrete> getVoisins() const;
            int getIdNode() const;
            bool getVisited() const;
            double getDistanceFromStart() const;
   virtual ~Noeud(void);

   // Comparaisons

   friend  bool operator==(const Noeud& aN1, const Noeud& aN2);
   friend  bool operator!=(const Noeud& aN1, const Noeud& aN2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Noeud& aN) const;

 protected :

             // ###

 private :

  int _id_node;
  bool _visited;
  double _distance_from_start=-1;
  vector<Arrete> voisins;



 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Noeud& aN);
   void _destroy(void);
};

#endif // _NOEUD_H_
