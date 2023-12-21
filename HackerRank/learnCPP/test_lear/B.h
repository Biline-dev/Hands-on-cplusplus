                   // Fichier genere avec ./genere B
#ifndef _B_H_
#define _B_H_

#include <iostream>

#include "A.h"
#include "C.h"

using namespace std;

class B : public A, public C
{
   friend ostream& operator<<(ostream& os, const B& aT);

 public :

   // Allocateurs/Desallocateurs

            B( /* ### */ );
            B( const int a);
            B(const B& aT);
            //B& operator=(const B& aT);
            virtual void g();
   virtual ~B(void);

   // Comparaisons

   friend  bool operator==(const B& aT1, const B& aT2);
   friend  bool operator!=(const B& aT1, const B& aT2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const B& aT) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const B& aT);
   void _destroy(void);
};

#endif // _B_H_
