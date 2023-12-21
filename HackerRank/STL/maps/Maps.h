                   // Fichier genere avec ./genere -t2 Maps
#ifndef _MAPS_H_
#define _MAPS_H_

#include <iostream>

using namespace std;


//---- Pour les classes template avec fonctions amies

template <class T1, class T2> class Maps;

template <class T1, class T2>
ostream& operator<<(ostream& os, const Maps<T1,T2>& aS);

template <class T1, class T2>
bool operator==(const Maps<T1,T2>& aS1,
                const Maps<T1,T2>& aS2);

template <class T1, class T2>
bool operator!=(const Maps<T1,T2>& aS1,
                const Maps<T1,T2>& aS2);

//---------------------------------------------------

//export
template <class T1, class T2>
class Maps
{
   friend ostream& operator<< <>(ostream& os, const Maps<T1,T2>& aS);

 public :

   // Allocateurs/Desallocateurs

            Maps( /* ### */ );
            Maps(const Maps<T1,T2>& aS);
            Maps<T1,T2>& operator=(const Maps<T1,T2>& aS);
   virtual ~Maps(void);

   // Comparaisons

   friend  bool operator== <>(const Maps<T1,T2>& aS1,
                              const Maps<T1,T2>& aS2);
   friend  bool operator!= <>(const Maps<T1,T2>& aS1,
                              const Maps<T1,T2>& aS2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Maps<T1,T2>& aS) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Maps<T1,T2>& aS);
   void _destroy(void);
};

#endif // _MAPS_H_
