                   // Fichier genere avec ./genere Quadrilatere
#ifndef _QUADRILATERE_H_
#define _QUADRILATERE_H_

#include <iostream>

#include "../question2/Figure.h"

using namespace std;

class Quadrilatere : public Figure{

   friend ostream& operator<<(ostream& os, const Quadrilatere& aQ);

 public :

   // Allocateurs/Desallocateurs

            Quadrilatere( /* ### */ );
            Quadrilatere(const Quadrilatere& aQ);
            Quadrilatere(const Point p1,const  Point p2, const  Point p3,const  Point p4);
            Quadrilatere& operator=(const Quadrilatere& aQ);
   virtual ~Quadrilatere(void);

   // Comparaisons

   friend  bool operator==(const Quadrilatere& aQ1, const Quadrilatere& aQ2);
   friend  bool operator!=(const Quadrilatere& aQ1, const Quadrilatere& aQ2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Quadrilatere& aQ) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Quadrilatere& aQ);
   void _destroy(void);
};

#endif // _QUADRILATERE_H_
