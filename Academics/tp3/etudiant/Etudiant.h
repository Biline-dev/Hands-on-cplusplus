#ifndef _ETUDIANT_H_
#define _ETUDIANT_H_

#include <iostream>

#include "../personne/Personne.h"

using namespace std;

class Etudiant : public Personne{

  friend ostream& operator<<(ostream& os, const Etudiant& anE);
  friend istream& operator>>(istream& i, Etudiant& anE);

  public :

   // Allocateurs/Desallocateurs

    Etudiant( /* ### */ );
    Etudiant(const Etudiant& anE);
    Etudiant(const double n1, const double n2);
    Etudiant(const Personne& p, const double n1, const double n2);


    Etudiant& operator=(const Etudiant& anE);
    virtual ~Etudiant(void);



    double calculeMoyenneEtudiant() const;
    double getNote1()const;
    double getNote2()const;
    void setNote1(const double n1);
    void setNote2(const double n2);
   // Comparaisons

   friend  bool operator==(const Etudiant& anE1, const Etudiant& anE2);
   friend  bool operator!=(const Etudiant& anE1, const Etudiant& anE2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
    virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<
    virtual void input(istream& i);
   // isEqualTo: a appeler dans une classe derivee (dans operator==)
    bool isEqualTo(const Etudiant& anE) const;
    

 protected :

             // ###

 private :
    // Attributs:

    double note1;
    double note2;
             // ###

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Etudiant& anE);
   void _destroy(void);
};

#endif // _ETUDIANT_H_
