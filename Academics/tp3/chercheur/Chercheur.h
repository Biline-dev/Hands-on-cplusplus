                   // Fichier genere avec ./genere Chercheur
#ifndef _Chercheur_H_
#define _Chercheur_H_

#include <iostream>

#include "../personne/Personne.h"

using namespace std;

class Chercheur : public Personne
{
   friend ostream& operator<<(ostream& os, const Chercheur& aC);
   friend istream& operator>>(istream& i,  Chercheur& aC);

 public :

   // Allocateurs/Desallocateurs

            Chercheur( /* ### */ );
            Chercheur(const Chercheur& aC);
            Chercheur(const string dom_rech);
            Chercheur(const int anneNaiss, const string nom, const string prenom,  
                      const string dom_rech);
            Chercheur(const Personne& aP, const string dom_rech);
            
            Chercheur& operator=(const Chercheur& aC);
            string getDomRecherche() const;
            void setDomRecherche(const string dom_rech);
            virtual void similaire() const;

   virtual ~Chercheur(void);

   // Comparaisons

   friend  bool operator==(const Chercheur& aC1, const Chercheur& aC2);
   friend  bool operator!=(const Chercheur& aC1, const Chercheur& aC2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
    virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<
    virtual void input(istream& i) ;
   // isEqualTo: a appeler dans une classe derivee (dans operator==)
    bool isEqualTo(const Chercheur& aC) const;

 protected :

             // ###

 private :
    //Attributs
    string dom_recherche;
             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Chercheur& aC);
   void _destroy(void);
};

#endif // _Chercheur_H_
