                   // Fichier genere avec ./genere -t1 Vecteurs
#ifndef _VECTEURS_H_
#define _VECTEURS_H_

#include <iostream>
#include <vector>

using namespace std;


//---- Pour les classes template avec fonctions amies

template <class T> class Vecteurs;

template <class T>
ostream& operator<<(ostream& os, const Vecteurs<T>& aS);

template <class T>
istream& operator>>(istream& i,  Vecteurs<T>& aS);

template <class T>
bool operator==(const Vecteurs<T>& aS1,
                const Vecteurs<T>& aS2);

template <class T>
bool operator!=(const Vecteurs<T>& aS1,
                const Vecteurs<T>& aS2);

//---------------------------------------------------

//export
template <class T>
class Vecteurs
{
   friend ostream& operator<< <>(ostream& os, const Vecteurs<T>& aS);
   friend istream& operator>> <>(istream& i,  Vecteurs<T>& aS);

 public :

   // Allocateurs/Desallocateurs

            Vecteurs( /* ### */ );
            Vecteurs(const Vecteurs<T>& aS);
            Vecteurs( const  vector<T> file);
            Vecteurs<T>& operator=(const Vecteurs<T>& aS);
            vector<T> getFile() const;
   virtual ~Vecteurs(void);

   // Comparaisons

   friend  bool operator== <>(const Vecteurs<T>& aS1,
                              const Vecteurs<T>& aS2);
   friend  bool operator!= <>(const Vecteurs<T>& aS1,
                              const Vecteurs<T>& aS2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<
   virtual void input(istream& i) ;           // methode appelee

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Vecteurs<T>& aS) const;

 protected :

             // ###

 private :

    vector<T> file;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Vecteurs<T>& aS);
   void _destroy(void);
};

#endif // _VECTEURS_H_
