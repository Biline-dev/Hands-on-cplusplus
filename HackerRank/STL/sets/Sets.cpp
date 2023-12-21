                   // Fichier genere avec ./genere -t2 Sets
#include "Sets.h"

//--
template <class T1, class T2>
Sets<T1,T2>::Sets( /* ### */ )
{
}

//--
template <class T1, class T2>
Sets<T1,T2>::Sets(const Sets<T1,T2>& aS)
{
 _copy(aS);
}

//--
template <class T1, class T2>
Sets<T1,T2>& Sets<T1,T2>::operator=(const Sets<T1,T2>& aS)
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
Sets<T1,T2>::~Sets(void)
{
 _destroy();
}

//--
template <class T1, class T2>
bool operator==(const Sets<T1,T2>& aS1,
                const Sets<T1,T2>& aS2)
{
 return aS1.isEqualTo(aS2);
}

//--
template <class T1, class T2>
bool operator!=(const Sets<T1,T2>& aS1,
                const Sets<T1,T2>& aS2)
{
 return !(aS1==aS2);
}

//--
template <class T1, class T2>
ostream& operator<<(ostream& os, const Sets<T1,T2>& aS)
{
 aS.display(os);
 return os;
}

//--
template <class T1, class T2>
void Sets<T1,T2>::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe Sets
 // Exemple : os << _at;
}

//--
template <class T1, class T2>
bool Sets<T1,T2>::isEqualTo(const Sets<T1,T2>& aS) const
{
 (void)aS; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Sets
 // Exemple : if (_at != aS._at) return false;
 return true;
}

//--
template <class T1, class T2>
void Sets<T1,T2>::_copy(const Sets<T1,T2>& aS)
{
 (void)aS; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Sets
 // Exemple : _at = aS._at;
}

//--
template <class T1, class T2>
void Sets<T1,T2>::_destroy(void)
{
 // ### : Destruction des attributs de la classe Sets
 // Exemple : delete _at;
}

