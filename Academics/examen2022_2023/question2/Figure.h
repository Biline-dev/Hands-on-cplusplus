                   // Fichier genere avec ./genere Figure
#ifndef _FIGURE_H_
#define _FIGURE_H_

#include <iostream>
#include <vector>
#include "../question1/Point.h"
//# include "../question1/Point.cpp"

using namespace std;

class Figure{


   friend ostream& operator<<(ostream& os, const Figure& aQ);

 public :

   // Allocateurs/Desallocateurs

            Figure( /* ### */ );
            Figure(const Figure& aQ);
            Figure& operator=(const Figure& aQ);
            Figure(const vector<Point> vecteur_point);

            void ajouterPoint(const Point point);
            void ajouterPoint(const double d1, const double d2);
            void setVecteurPoint(vector<Point> newVector);
            int size() const;
            void deplace(const double x, const double y);
            vector<Point> getVecteurPoint() const;
   virtual ~Figure(void);

   // Comparaisons

   friend  bool operator==(const Figure& aQ1, const Figure& aQ2);
   friend  bool operator!=(const Figure& aQ1, const Figure& aQ2);
   friend  Figure operator+(const Figure& aQ1, const Figure& aQ2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Figure& aQ) const;

 protected :

             // ###

 private :

    vector<Point> vecteur_point;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Figure& aQ);
   void _destroy(void);
};

#endif // _FIGURE_H_
