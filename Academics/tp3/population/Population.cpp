                   // Fichier genere avec ./genere Population
#include "Population.h"

//--
Population::Population( /* ### */ )
{
}

//--
Population::Population(const Population& aT)
{
 _copy(aT);
}

//--
Population::Population(const vector<Personne*> staff){
    this->staff = staff;
}

//--
Population& Population::operator=(const Population& aT)
{
 if (this != &aT)
 {
  _destroy();
  _copy(aT);
 }
 return *this;
}

//--
Population::~Population(void)
{
 _destroy();
}

//--
bool operator==(const Population& aT1, const Population& aT2)
{
 return aT1.isEqualTo(aT2);
}

//--
bool operator!=(const Population& aT1, const Population& aT2)
{
 return !(aT1==aT2);
}

//--
ostream& operator<<(ostream& os, const Population& aT)
{
 aT.display(os);
 return os;
}

//--
void Population::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 // ### : Affichage des attributs de la classe Population
 // Exemple : os << _at;
}

//--
bool Population::isEqualTo(const Population& aT) const
{
 (void)aT; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Population
 // Exemple : if (_at != aT._at) return false;
 return true;
}

//--
void Population::_copy(const Population& aT)
{
 (void)aT; // Pour eviter un warning si pas utilise
 /*for (int i=0; i < aT.staff.size(); i++) {
        staff.push_back(aT.staff[i]);
    }*/
}

//--
void Population::_destroy(void)
{

    for(int i=0; i<staff.size(); i++){
        delete staff[i];
    } 
    staff.clear();
}


const vector<Personne*>& Population::getstaff() const{
    return staff;
}
void Population::setstaff(vector<Personne*> staff){
    this->staff = staff;
}
