                   // Fichier genere avec ./genere C
#include "C.h"

//--
C::C( /* ### */ )
{
    cout << " C" << endl;
}

//--
C::C(const C& aT)
{
 _copy(aT);
}

//--
C& C::operator=(const C& aT)
{
 if (this != &aT)
 {
  _destroy();
  _copy(aT);
 }
 return *this;
}

//--
C::~C(void)
{
 _destroy();
 cout << " ~C" << endl;
}

//--
bool operator==(const C& aT1, const C& aT2)
{
 return aT1.isEqualTo(aT2);
}

//--
bool operator!=(const C& aT1, const C& aT2)
{
 return !(aT1==aT2);
}

//--
ostream& operator<<(ostream& os, const C& aT)
{
 aT.display(os);
 return os;
}

//--
void C::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe C
 // Exemple : os << _at;
}

//--
bool C::isEqualTo(const C& aT) const
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe C
 // Exemple : if (_at != aT._at) return false;
 return true;
}

//--
void C::_copy(const C& aT)
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe C
 // Exemple : _at = aT._at;
}

//--
void C::_destroy(void)
{
 // ### : Destruction des attributs de la classe C
 // Exemple : delete _at;
}

