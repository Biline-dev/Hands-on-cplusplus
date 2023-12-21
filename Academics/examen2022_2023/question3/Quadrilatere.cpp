                   // Fichier genere avec ./genere Quadrilatere
#include "Quadrilatere.h"

//--
Quadrilatere::Quadrilatere( /* ### */ ) : Figure( /* ### */ )
{
}

//--
Quadrilatere::Quadrilatere(const Quadrilatere& aQ) : Figure(aQ)
{
 _copy(aQ);
}


//--
Quadrilatere::Quadrilatere(const Point p1,const Point p2, const Point p3,const Point p4){

    ajouterPoint(p1);
    ajouterPoint(p2);
    ajouterPoint(p3);
    ajouterPoint(p4);
}

//--
Quadrilatere& Quadrilatere::operator=(const Quadrilatere& aQ)
{
 if (this != &aQ)
 {
  Figure::operator=(aQ);
  _destroy();
  _copy(aQ);
 }
 return *this;
}

//--
Quadrilatere::~Quadrilatere(void)
{
 _destroy();
}

//--
bool operator==(const Quadrilatere& aQ1, const Quadrilatere& aQ2)
{
 return aQ1.isEqualTo(aQ2);
}

//--
bool operator!=(const Quadrilatere& aQ1, const Quadrilatere& aQ2)
{
 return !(aQ1==aQ2);
}

//--
ostream& operator<<(ostream& os, const Quadrilatere& aQ)
{
 aQ.display(os);
 return os;
}

//--
void Quadrilatere::display(ostream& os) const{
    (void)os;
    os << "Quadrilatere : ";
    Figure::display(os);
}

//--
bool Quadrilatere::isEqualTo(const Quadrilatere& aQ) const
{
 (void)aQ; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Quadrilatere
 // Exemple : if (_at != aQ._at) return false;

 if (!(Figure::isEqualTo(aQ))) return false;
 return true;
}

//--
void Quadrilatere::_copy(const Quadrilatere& aQ)
{
 (void)aQ; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Quadrilatere
 // Exemple : _at = aQ._at;
}

//--
void Quadrilatere::_destroy(void)
{
 // ### : Destruction des attributs de la classe Quadrilatere
 // Exemple : delete _at;
}

