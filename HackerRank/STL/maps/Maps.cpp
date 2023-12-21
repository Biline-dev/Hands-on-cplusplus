                   // Fichier genere avec ./genere -t2 Maps
#include "Maps.h"

//--
template <class T1, class T2>
Maps<T1,T2>::Maps( /* ### */ )
{
}

//--
template <class T1, class T2>
Maps<T1,T2>::Maps(const Maps<T1,T2>& aS)
{
 _copy(aS);
}

//--
template <class T1, class T2>
Maps<T1,T2>& Maps<T1,T2>::operator=(const Maps<T1,T2>& aS)
{
 if (this != &aS)
 {
  _destroy();
  _copy(aS);
 }
 return *this;
}

//--
template <class T1, class T2>
Maps<T1,T2>::~Maps(void)
{
 _destroy();
}

//--
template <class T1, class T2>
bool operator==(const Maps<T1,T2>& aS1,
                const Maps<T1,T2>& aS2)
{
 return aS1.isEqualTo(aS2);
}

//--
template <class T1, class T2>
bool operator!=(const Maps<T1,T2>& aS1,
                const Maps<T1,T2>& aS2)
{
 return !(aS1==aS2);
}

//--
template <class T1, class T2>
ostream& operator<<(ostream& os, const Maps<T1,T2>& aS)
{
 aS.display(os);
 return os;
}

//--
template <class T1, class T2>
void Maps<T1,T2>::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe Maps
 // Exemple : os << _at;
}

//--
template <class T1, class T2>
bool Maps<T1,T2>::isEqualTo(const Maps<T1,T2>& aS) const
{
 (void)aS; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Maps
 // Exemple : if (_at != aS._at) return false;
 return true;
}

//--
template <class T1, class T2>
void Maps<T1,T2>::_copy(const Maps<T1,T2>& aS)
{
 (void)aS; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Maps
 // Exemple : _at = aS._at;
}

//--
template <class T1, class T2>
void Maps<T1,T2>::_destroy(void)
{
 // ### : Destruction des attributs de la classe Maps
 // Exemple : delete _at;
}

