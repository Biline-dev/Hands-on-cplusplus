                   // Fichier genere avec ./genere Population
#ifndef _POPULATION_H_
#define _POPULATION_H_

#include <iostream>
#include <vector>
#include "../personne/Personne.h"


using namespace std;

class Population
{
   friend ostream& operator<<(ostream& os, const Population& aT);

 public :

   // Allocateurs/Desallocateurs

            Population( /* ### */ );
            Population(const Population& aT);
            Population(const vector<Personne*> staff);
            Population& operator=(const Population& aT);
            const vector<Personne*>& getstaff() const;
            void setstaff(vector<Personne*> staff);

   virtual ~Population(void);

   // Comparaisons

   friend  bool operator==(const Population& aT1, const Population& aT2);
   friend  bool operator!=(const Population& aT1, const Population& aT2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Population& aT) const;

 protected :

             // ###

 private :

    vector<Personne*> staff;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Population& aT);
   void _destroy(void);
};

#endif // _POPULATION_H_
