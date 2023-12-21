                   // Fichier genere avec ./genere Concert
#ifndef _CONCERT_H_
#define _CONCERT_H_

#include <iostream>

#include "../partie2/Evenement.h"

using namespace std;

class Concert : public Evenement
{
   friend ostream& operator<<(ostream& os, const Concert& aP);

 public :

   // Allocateurs/Desallocateurs

            Concert( /* ### */ );
            Concert(const Concert& aP);
            Concert(const Evenement event, string nom_groupe);
            Concert& operator=(const Concert& aP);
            virtual double pub() const;
   virtual ~Concert(void);

   // Comparaisons

   friend  bool operator==(const Concert& aP1, const Concert& aP2);
   friend  bool operator!=(const Concert& aP1, const Concert& aP2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Concert& aP) const;

 protected :

             // ###

 private :

    string _nom_groupe;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Concert& aP);
   void _destroy(void);
};

#endif // _CONCERT_H_
