                   // Fichier genere avec ./genere C
#ifndef _C_H_
#define _C_H_

#include <iostream>

using namespace std;

class C
{
   friend ostream& operator<<(ostream& os, const C& aT);

 public :

   // Allocateurs/Desallocateurs

            C( /* ### */ );
            C(const C& aT);
            C& operator=(const C& aT);
            virtual void g() =0;
   virtual ~C(void);

   // Comparaisons

   friend  bool operator==(const C& aT1, const C& aT2);
   friend  bool operator!=(const C& aT1, const C& aT2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const C& aT) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const C& aT);
   void _destroy(void);
};

#endif // _C_H_
