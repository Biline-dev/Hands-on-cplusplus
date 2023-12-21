                   // Fichier genere avec ./genere Concert
#include "Concert.h"

//--
Concert::Concert( /* ### */ ) : Evenement(  )
{
    
}

//--
Concert::Concert(const Concert& aP) : Evenement(aP)
{
 _copy(aP);
}

Concert::Concert(const Evenement event, string nom_groupe){
    setCode(event.getCode());
    setLieu(event.getLieu());
    setDates(event.getDates());
    _nom_groupe = nom_groupe;

}
//--
Concert& Concert::operator=(const Concert& aP)
{
 if (this != &aP)
 {
  Evenement::operator=(aP);
  _destroy();
  _copy(aP);
 }
 return *this;
}

//--
Concert::~Concert(void)
{
 _destroy();
}

//--
bool operator==(const Concert& aP1, const Concert& aP2)
{
 return aP1.isEqualTo(aP2);
}

//--
bool operator!=(const Concert& aP1, const Concert& aP2)
{
 return !(aP1==aP2);
}

//--
ostream& operator<<(ostream& os, const Concert& aP)
{
 aP.display(os);
 return os;
}

//--
void Concert::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 Evenement::display(os);
    cout << "Notre groupe est : " << _nom_groupe << endl;
}

//--
bool Concert::isEqualTo(const Concert& aP) const
{
 (void)aP; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Concert
 // Exemple : if (_at != aP._at) return false;

 if (!(Evenement::isEqualTo(aP))) return false;

 return true;
}

//--
void Concert::_copy(const Concert& aP)
{
 (void)aP; // Pour eviter un warning si pas utilise

_nom_groupe = aP._nom_groupe;
}

//--
void Concert::_destroy(void)
{
 //cout << "bye! from comcert" << endl;
}


double Concert::pub() const{

    return 200*getDates().size();
}