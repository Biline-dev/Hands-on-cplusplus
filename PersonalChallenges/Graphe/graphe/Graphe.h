                   // Fichier genere avec ./genere Graphe
#ifndef _GRAPHE_H_
#define _GRAPHE_H_

#include <iostream>
#include <vector>
#include "../node/Noeud.h"

using namespace std;

class Graphe{
   friend ostream& operator<<(ostream& os, const Graphe& aG);

 public :

   // Allocateurs/Desallocateurs

            Graphe( /* ### */ );
            Graphe(const Graphe& aG);
            Graphe(const vector<Noeud> graphe);
            Graphe& operator=(const Graphe& aG);
            vector<Noeud> getGraphe() const;
            void setGraphe(const vector<Noeud> graphe);
            int size() const;
            vector<Noeud> parcoursDjikstra(const int id_start, const int id_end) const;
   virtual ~Graphe(void);

   // Comparaisons

   friend  bool operator==(const Graphe& aG1, const Graphe& aG2);
   friend  bool operator!=(const Graphe& aG1, const Graphe& aG2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Graphe& aG) const;

 protected :

             // ###

 private :
    vector<Noeud> _graphe;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Graphe& aG);
   void _destroy(void);
};


#endif // _GRAPHE_H_
