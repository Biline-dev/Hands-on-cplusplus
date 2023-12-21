                   // Fichier genere avec ./genere Triangle
#include "Triangle.h"

//--
Triangle::Triangle( /* ### */ ) : Figure( /* ### */ )
{}

//--
Triangle::Triangle(const Triangle& aT) : Figure(aT){
    _copy(aT);
}


//--
Triangle::Triangle(const Point p1,const  Point p2, const  Point p3){

    ajouterPoint(p1);
    ajouterPoint(p2);
    ajouterPoint(p3);
}

//--
Triangle& Triangle::operator=(const Triangle& aT)
{
 if (this != &aT)
 {
  Figure::operator=(aT);
  _destroy();
  _copy(aT);
 }
 return *this;
}

//--
Triangle::~Triangle(void)
{
 _destroy();
}

//--
bool operator==(const Triangle& aT1, const Triangle& aT2)
{
 return aT1.isEqualTo(aT2);
}

//--
bool operator!=(const Triangle& aT1, const Triangle& aT2)
{
 return !(aT1==aT2);
}

//--
ostream& operator<<(ostream& os, const Triangle& aT)
{
 aT.display(os);
 return os;
}

//--
void Triangle::display(ostream& os) const{
    (void)os; // Pour eviter un warning si pas utilise
    os << "Triangle : ";
    Figure::display(os);
}

//--
bool Triangle::isEqualTo(const Triangle& aT) const
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Triangle
 // Exemple : if (_at != aT._at) return false;

 if (!(Figure::isEqualTo(aT))) return false;
 return true;
}

//--
void Triangle::_copy(const Triangle& aT)
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Triangle
 // Exemple : _at = aT._at;
}

//--
void Triangle::_destroy(void)
{
 // ### : Destruction des attributs de la classe Triangle
 // Exemple : delete _at;
}

