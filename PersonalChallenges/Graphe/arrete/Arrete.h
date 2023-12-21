                   // Fichier genere avec ./genere Arrete
#ifndef _ARRETE_H_
#define _ARRETE_H_

#include <iostream>

using namespace std;

class Arrete
{
   friend ostream& operator<<(ostream& os, const Arrete& anA);

 public :

   // Allocateurs/Desallocateurs

            Arrete( /* ### */ );
            Arrete(const Arrete& anA);
            Arrete(const int id_node, const double poid);
            Arrete& operator=(const Arrete& anA);
            void setPoid(const double poid);
            void setIdNode(const int id_node);
            double getPoid() const;
            int getIdNode() const;

   virtual ~Arrete(void);

   // Comparaisons

   friend  bool operator==(const Arrete& anA1, const Arrete& anA2);
   friend  bool operator!=(const Arrete& anA1, const Arrete& anA2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Arrete& anA) const;

 protected :

             // ###

 private :
    // ###
    int _id_node;
    double _poid;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Arrete& anA);
   void _destroy(void);
};

#endif // _ARRETE_H_
