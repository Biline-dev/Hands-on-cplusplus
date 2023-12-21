                   // Fichier genere avec ./genere Triangle
#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>

#include "../question2/Figure.h"

using namespace std;

class Triangle : public Figure
{
   friend ostream& operator<<(ostream& os, const Triangle& aT);

 public :

   // Allocateurs/Desallocateurs

            Triangle( /* ### */ );
            Triangle(const Triangle& aT);
            Triangle(const Point p1,const  Point p2, const  Point p3);
            Triangle& operator=(const Triangle& aT);
   virtual ~Triangle(void);

   // Comparaisons

   friend  bool operator==(const Triangle& aT1, const Triangle& aT2);
   friend  bool operator!=(const Triangle& aT1, const Triangle& aT2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Triangle& aT) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Triangle& aT);
   void _destroy(void);
};

#endif // _TRIANGLE_H_
