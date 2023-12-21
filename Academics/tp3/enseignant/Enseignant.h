                   // Fichier genere avec ./genere Enseignant
#ifndef _Enseignant_H_
#define _Enseignant_H_

#include <iostream>

#include "../personne/Personne.h"

using namespace std;

class Enseignant : public Personne
{
   friend ostream& operator<<(ostream& os, const Enseignant& anE);
   friend istream& operator>>(istream& i, Enseignant& anE);

 public :

   // Allocateurs/Desallocateurs

      Enseignant( /* ### */ );
      Enseignant(const Enseignant& anE);
      Enseignant(const Personne& p);
      Enseignant(const Personne& p, const double cm, const double td);
      Enseignant(const double cm, const double td);
      Enseignant( const int anneNaiss, const string nom, const string prenom);
      
      Enseignant& operator=(const Enseignant& anE);
      virtual ~Enseignant(void);

      double getCM()const;
      double getTD()const;
      void setCM(const double cm);
      void setTD(const double td);
      virtual void similaire() const;

   // Comparaisons

   friend  bool operator==(const Enseignant& anE1, const Enseignant& anE2);
   friend  bool operator!=(const Enseignant& anE1, const Enseignant& anE2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
      virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<
      virtual void input(istream& i);
   // isEqualTo: a appeler dans une classe derivee (dans operator==)
    bool isEqualTo(const Enseignant& anE) const;
    double nombreETD() const;

 protected :

             // ###

 private :

    //Attributs:
    double _cm;
    double _td;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Enseignant& anE);
   void _destroy(void);
};

#endif // _Enseignant_H_
