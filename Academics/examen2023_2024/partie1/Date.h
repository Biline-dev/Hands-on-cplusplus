                   // Fichier genere avec ./genere Date
#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>

using namespace std;

class Date
{
   friend ostream& operator<<(ostream& os, const Date& aP);

 public :

   // Allocateurs/Desallocateurs

            Date( /* ### */ );
            Date(const Date& aP);
            Date(const int jour, const int mois, const int annee);
            Date& operator=(const Date& aP);
            void setJour(const int jour);
            void setMois(const int mois);
            void setAnnee(const int annee);
            int getJour() const;
            int getMois() const;
            int getAnnee() const;
            

   virtual ~Date(void);

   // Comparaisons

   friend  bool operator==(const Date& aP1, const Date& aP2);
   friend  bool operator!=(const Date& aP1, const Date& aP2);
   friend  Date operator+(const Date& aP1,  int d);
   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Date& aP) const;
           

 protected :

             // ###

 private :

    int _jour; 
    int _mois;
    int _annee;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Date& aP);
   void _destroy(void);
};

#endif // _DATE_H_
