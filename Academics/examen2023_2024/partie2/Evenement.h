                   // Fichier genere avec ./genere Evenement
#ifndef _EVENEMENT_H_
#define _EVENEMENT_H_

#include <iostream>
#include <vector>
#include "../partie1/Date.h"


using namespace std;

class Evenement
{
   friend ostream& operator<<(ostream& os, const Evenement& aP);

 public :

   // Allocateurs/Desallocateurs

            Evenement( /* ### */ );
            Evenement(const Evenement& aP);
            Evenement(const int code, const string lieux);
            Evenement(const int code, const string lieu, const vector<Date> dates);
            Evenement& operator=(const Evenement& aP);
            void setCode(int code); 
            void setLieu(string lieu); 
            void setDates(vector<Date> dates); 
            int getCode() const;
            string getLieu()const;
            vector<Date> getDates() const;
            virtual void ajouterDate(const Date newDate);
            virtual void ajouterDate(const int jour, const int mois, const int annee);
            virtual double pub() const;
   virtual ~Evenement(void);

   // Comparaisons

   friend  bool operator==(const Evenement& aP1, const Evenement& aP2);
   friend  bool operator!=(const Evenement& aP1, const Evenement& aP2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Evenement& aP) const;

 protected :

             // ###

 private :

    int _code_event;
    string _lieu;
    vector<Date> _dates;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Evenement& aP);
   void _destroy(void);
};

#endif // _EVENEMENT_H_
