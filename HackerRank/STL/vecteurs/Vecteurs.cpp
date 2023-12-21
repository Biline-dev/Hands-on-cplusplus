                   // Fichier genere avec ./genere -t1 Vecteurs
#include "Vecteurs.h"

//--
template <class T>
Vecteurs<T>::Vecteurs( /* ### */ )
{
}


template <class T>
Vecteurs<T>::Vecteurs( const  vector<T> file)
{
    this->file = file;
}

//--
template <class T>
Vecteurs<T>::Vecteurs(const Vecteurs<T>& aS)
{
 _copy(aS);
}

//--
template <class T>
Vecteurs<T>& Vecteurs<T>::operator=(const Vecteurs<T>& aS)
{
 if (this != &aS)
 {
  _destroy();
  _copy(aS);
 }
 return *this;
}

//--
template <class T>
Vecteurs<T>::~Vecteurs(void)
{
 _destroy();
}

//--
template <class T>
bool operator==(const Vecteurs<T>& aS1,
                const Vecteurs<T>& aS2)
{
 return aS1.isEqualTo(aS2);
}

//--
template <class T>
bool operator!=(const Vecteurs<T>& aS1,
                const Vecteurs<T>& aS2)
{
 return !(aS1==aS2);
}

//--
template <class T>
ostream& operator<<(ostream& os, const Vecteurs<T>& aS)
{
 aS.display(os);
 return os;
}


//--
template <class T>
istream& operator>>(istream& i,  Vecteurs<T>& aS)
{
 aS.input(i);
 return i;
}

//--
template <class T>
void Vecteurs<T>::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe Vecteurs
 // Exemple : os << _at;
}


//--
template <class T>
void Vecteurs<T>::input(istream& i) {
    (void)i; // Pour eviter un warning si pas utilise
    T elm;
    i >> elm;
    cout << elm << endl;
}

//--
template <class T>
bool Vecteurs<T>::isEqualTo(const Vecteurs<T>& aS) const
{
 (void)aS; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Vecteurs
 // Exemple : if (_at != aS._at) return false;
 return true;
}

//--
template <class T>
void Vecteurs<T>::_copy(const Vecteurs<T>& aS)
{
 (void)aS; // Pour eviter un warning si pas utilise

 // ### : Affectation des attributs de la classe Vecteurs
 // Exemple : _at = aS._at;
}

//--
template <class T>
void Vecteurs<T>::_destroy(void)
{
 // ### : Destruction des attributs de la classe Vecteurs
 // Exemple : delete _at;
}

template <class T>
vector<T> Vecteurs<T>::getFile() const{
    return file;
}
