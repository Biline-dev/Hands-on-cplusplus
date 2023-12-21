                   // Fichier genere avec ./genere Point
#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

using namespace std;

class Point{
   friend ostream& operator<<(ostream& os, const Point& aQ);

 public :

   // Allocateurs/Desallocateurs

            Point( /* ### */ );
            Point( const double d1, const double d2);
            Point( const double d1);
            Point(const Point& aQ);
            Point& operator=(const Point& aQ);
            double getX() const;
            double getY() const;
            void setX(double x);
            void setY(double y);

   virtual ~Point(void);

   // Comparaisons

   friend  bool operator==(const Point& aQ1, const Point& aQ2);
   friend  bool operator!=(const Point& aQ1, const Point& aQ2);

   // Inspecteurs/modificateurs

 protected :

   // Methodes a appeler par une classe derivee

   // display: a appeler dans une classe derivee      // display est une
   virtual void display(ostream& os) const;           // methode appelee
                                                      // dans operator<<

   // isEqualTo: a appeler dans une classe derivee (dans operator==)
           bool isEqualTo(const Point& aQ) const;

 protected :

             // ###

 private :

    double _x;
    double _y;

 private :

   // Methodes privees d'allocation/desallocation

   void _copy(const Point& aQ);
   void _destroy(void);
};

#endif // _POINT_H_
