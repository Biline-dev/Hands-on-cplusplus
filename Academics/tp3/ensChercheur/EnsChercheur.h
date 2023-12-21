                   // Fichier genere avec ./genere EnsChercheur
#ifndef _EnsChercheur_H_
#define _EnsChercheur_H_

#include <iostream>

#include "../chercheur/Chercheur.h"
#include "../enseignant/Enseignant.h"

using namespace std;

class EnsChercheur :  public Chercheur,
                      public Enseignant{

  friend ostream& operator<<(ostream& os, const EnsChercheur& anE);
  friend istream& operator>>(istream& i,  EnsChercheur& anE);

  public :

   // Allocateurs/Desallocateurs

            EnsChercheur( /* ### */ );
            EnsChercheur(const EnsChercheur& anE);
            EnsChercheur(const Enseignant& anE, const Chercheur& aC);
            EnsChercheur(const Personne& aP, const string dom_rech, const double cm, const double td);
            EnsChercheur( int anneNaiss, string nom, string prenom, const string dom_rech, 
                            const double cm, const double td);

            EnsChercheur& operator=(const EnsChercheur& anE);
            virtual void similaire() const;
            
   virtual ~EnsChercheur(void);

   // Comparaisons

   friend  bool operator==(const EnsChercheur& anE1, const EnsChercheur& anE2);
   friend  bool operator!=(const EnsChercheur& anE1, const EnsChercheur& anE2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
    virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<
    virtual void input(istream& i) ;
   // isEqualTo: a appeler dans une classe derivee (dans operator==)
    bool isEqualTo(const EnsChercheur& anE) const;

 protected :

             // ###

 private :

             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const EnsChercheur& anE);
   void _destroy(void);
};

#endif // _EnsChercheur_H_
