                   // Fichier genere avec ./genere B
#include "B.h"

//--
B::B(  ) {

    cout << " B" << endl;
}

//--
B::B( const int a) : A( a){}

//--
B::B(const B& aT) : A(aT)
{
 _copy(aT);
}

//--
/*
B& B::operator=(const B& aT)
{
 if (this != &aT)
 {
  A::operator=(aT);
  _destroy();
  _copy(aT);
 }
 return *this;
}*/

//--
B::~B(void)
{
 _destroy();
 cout << " ~B" << endl;
}

//--
bool operator==(const B& aT1, const B& aT2)
{
 return aT1.isEqualTo(aT2);
}

//--
bool operator!=(const B& aT1, const B& aT2)
{
 return !(aT1==aT2);
}

//--
ostream& operator<<(ostream& os, const B& aT)
{
 aT.display(os);
 return os;
}

//--
void B::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 A::display(os);

 // ### : Affichage des attributs de la classe B
 // Exemple : os << _at;
}

//--
bool B::isEqualTo(const B& aT) const
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe B
 // Exemple : if (_at != aT._at) return false;

 if (!(A::isEqualTo(aT))) return false;
 return true;
}

//--
void B::_copy(const B& aT)
{
 (void)aT; // Pour eviter un warning si pas utilise

}

//--
void B::_destroy(void)
{
 // ### : Destruction des attributs de la classe B
 // Exemple : delete _at;
}

void B::g(){
    cout << "hanini" << endl;
}
