                   // Fichier genere avec ./genere -t2 Sets
#ifndef _SETS_H_
#define _SETS_H_

#include <iostream>

using namespace std;


//---- Pour les classes template avec fonctions amies

template <class T1, class T2> class Sets;

template <class T1, class T2>
ostream& operator<<(ostream& os, const Sets<T1,T2>& aS);

template <class T1, class T2>
bool operator==(const Sets<T1,T2>& aS1,
                const Sets<T1,T2>& aS2);

template <class T1, class T2>
bool operator!=(const Sets<T1,T2>& aS1,
                const Sets<T1,T2>& aS2);

//---------------------------------------------------

//export
template <class T1, class T2>
class Sets
{
   friend ostream& operator<< <>(ostream& os, const Sets<T1,T2>& aS);

 public :

   // Allocateurs/Desallocateurs

            Sets( /* ### */ );
            Sets(const Sets<T1,T2>& aS);
            Sets<T1,T2>& operator=(const Sets<T1,T2>& aS);
   virtual ~Sets(void);

   // Comparaisons

   friend  bool operator== <>(const Sets<T1,T2>& aS1,
                              const Sets<T1,T2>& aS2);
   friend  bool operator!= <>(const Sets<T1,T2>& aS1,
                              const Sets<T1,T2>& aS2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Sets<T1,T2>& aS) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Sets<T1,T2>& aS);
   void _destroy(void);
};

#endif // _SETS_H_
