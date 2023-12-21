                   // Fichier genere avec ./genere A
#include "A.h"

//--
A::A( void ) : _a(10){
    cout << " A" << endl;
}

//--
A::A( int a ){
    _a=a;
}

//--
A::A(const A& aT)
{
 _copy(aT);
}

//--
A& A::operator=(const A& aT){
    if (this != &aT){
        _destroy();
        _copy(aT);
    }
    return *this;
}

//--
A::~A(void)
{
 _destroy();
 cout << " ~A" << endl;
}

//--
bool operator==(const A& aT1, const A& aT2)
{
 return aT1.isEqualTo(aT2);
}

//--
bool operator!=(const A& aT1, const A& aT2)
{
 return !(aT1==aT2);
}

//--
ostream& operator<<(ostream& os, const A& aT)
{
 aT.display(os);
 return os;
}

//--
void A::display(ostream& os) const
{
    (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe A
    os << _a;
}

//--
bool A::isEqualTo(const A& aT) const
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe A
 // Exemple : if (_at != aT._at) return false;
 return true;
}

//--
void A::_copy(const A& aT)
{
 (void)aT; // Pour eviter un warning si pas utilise
    _a = aT._a;
}

//--
void A::_destroy(void)
{
 // ### : Destruction des attributs de la classe A
 // Exemple : delete _at;
}


int A::f(void){
    return _a;
}