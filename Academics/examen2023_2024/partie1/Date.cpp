                   // Fichier genere avec ./genere Date
#include "Date.h"

//--
Date::Date( /* ### */ )
{
    _jour = 18;
    _mois = 12;
    _annee = 2023;
}

//--
Date::Date(const Date& aP)
{
 _copy(aP);
}

//--
Date::Date(const int jour, const int mois, const int annee){
    _jour = jour;
    _mois = mois;
    _annee = annee;
}


//--
Date& Date::operator=(const Date& aP)
{
 if (this != &aP)
 {
  _destroy();
  _copy(aP);
 }
 return *this;
}

//--
Date::~Date(void)
{
 _destroy();
}

//--
bool operator==(const Date& aP1, const Date& aP2)
{
 return aP1.isEqualTo(aP2);
}

//--
bool operator!=(const Date& aP1, const Date& aP2)
{
 return !(aP1==aP2);
}

//--
ostream& operator<<(ostream& os, const Date& aP)
{
 aP.display(os);
 return os;
}

//--
Date  operator+(const Date& aP1,  int d){
    
    Date d1;

    if(d + aP1._jour<=30 && aP1._mois!=12){
        d1.setJour(aP1._jour+d);
    }else if(aP1._mois<12){
        d1.setJour(aP1._jour+d-30-1);
        d1.setMois(aP1._mois+1);
    }else{
        d1.setJour(aP1._jour+d-30-1);
        d1.setMois(aP1._mois+1-12-1);
        d1.setAnnee(aP1._annee+1);
    }

    return d1;
}

//--
void Date::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

 os << this->getJour() <<"/"<< this->getMois() << "/" << this->getAnnee();
}


//--
bool Date::isEqualTo(const Date& aP) const
{
    
 (void)aP; // Pour eviter un warning si pas utilise
    
    if(_jour!=aP._jour) return false;
    if(_mois!=aP._mois) return false;
    if(_annee!=aP._annee) return false;
 return true;
}

//--
void Date::_copy(const Date& aP)
{
 (void)aP; // Pour eviter un warning si pas utilise
     _jour = aP._jour;
    _mois = aP._mois;
    _annee = aP._annee;
}

//--
void Date::_destroy(void)
{
//cout << "bye! from dates" << endl;
}

void Date::setJour(const int jour){
    _jour = jour;
}
void Date::setMois(const int mois){
    _mois = mois;
}
void Date::setAnnee(const int annee){
    _annee = annee;
}
int Date::getJour() const{
    return _jour;
}
int Date::getMois() const{
    return _mois;
}
int Date::getAnnee() const{
    return _annee;
}
