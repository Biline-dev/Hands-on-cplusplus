                   // Fichier genere avec ./genere Evenement
#include "Evenement.h"
#include "../partie1/Date.h"
//--
Evenement::Evenement( /* ### */ )
{
    _code_event = -1;
}

//--
Evenement::Evenement(const Evenement& aP)
{
 _copy(aP);
}
//--
Evenement::Evenement(const int code, const string lieu, const vector<Date> dates){

    _code_event = code;
    _lieu = lieu;
    _dates = dates;

}

//--
Evenement::Evenement(const int code, const string lieux){

    _code_event = code;
    _lieu = lieux;
}

//--
Evenement& Evenement::operator=(const Evenement& aP)
{
 if (this != &aP)
 {
  _destroy();
  _copy(aP);
 }
 return *this;
}

//--
Evenement::~Evenement(void)
{
 _destroy();
}

//--
bool operator==(const Evenement& aP1, const Evenement& aP2)
{
 return aP1.isEqualTo(aP2);
}

//--
bool operator!=(const Evenement& aP1, const Evenement& aP2)
{
 return !(aP1==aP2);
}

//--
ostream& operator<<(ostream& os, const Evenement& aP)
{
 aP.display(os);
 return os;
}

//--
void Evenement::display(ostream& os) const
{
 (void)os; // Pour eviter un warning si pas utilise

if(_code_event ==-1){
    os << "ecenement en cours de creation"<< endl;
}else{
    os << "code: " << _code_event << " lieu: " << _lieu << " les dates: {" << endl;
    for(int i=0; i<_dates.size(); i++){
        cout << _dates[i] << ", ";
    }
    cout<< "}";
}

}

//--
bool Evenement::isEqualTo(const Evenement& aP) const
{
 (void)aP; // Pour eviter un warning si pas utilise
    if (_code_event!=aP._code_event) return false;
 return true;
}

//--
void Evenement::_copy(const Evenement& aP)
{
    (void)aP; // Pour eviter un warning si pas utilise

    _code_event = aP._code_event;
    _lieu = aP._lieu;
    _dates = aP._dates;
}

//--
void Evenement::_destroy(void)
{
//cout << "bye! from event" << endl;
}


void  Evenement::setCode(int code){
    _code_event = code;
}
void  Evenement::setLieu(string lieu){
    _lieu = lieu;
} 
void  Evenement::setDates(vector<Date> dates){
    _dates = dates;
}
int  Evenement::getCode() const{
    return _code_event;
}
string  Evenement::getLieu()const{
    return _lieu;
}
vector<Date>  Evenement::getDates() const{
    return _dates;
}

void Evenement::ajouterDate(const Date newDate){
    _dates.push_back(newDate);
}

void Evenement::ajouterDate(const int jour, const int mois, const int annee){
     Date date(jour, mois, annee);
    _dates.push_back(date);
}

double Evenement::pub() const{
    return 500;
}
