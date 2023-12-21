                   // Fichier genere avec ./genere A
#ifndef _A_H_
#define _A_H_

#include <iostream>

using namespace std;

class A
{
   friend ostream& operator<<(ostream& os, const A& aT);

 public :

   // Allocateurs/Desallocateurs

            A( int a );
            A( void );
            A(const A& aT);
            A& operator=(const A& aT);
            int f(void);
   virtual ~A(void);

   // Comparaisons

   friend  bool operator==(const A& aT1, const A& aT2);
   friend  bool operator!=(const A& aT1, const A& aT2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const A& aT) const;

 protected :

      int _a;

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const A& aT);
   void _destroy(void);
};

#endif // _A_H_
