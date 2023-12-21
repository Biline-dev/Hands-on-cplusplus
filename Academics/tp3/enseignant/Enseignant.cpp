                   // Fichier genere avec ./genere Enseignant
#include "Enseignant.h"

//--
Enseignant::Enseignant( /* ### */ ) : Personne( /* ### */ ){}

//--
Enseignant::Enseignant(const Enseignant& anE) : Personne(anE){
    _copy(anE);
}

//--//--
Enseignant::Enseignant(const double cm, const double td){
    this->_cm =cm;
    this->_td = td;
}


Enseignant::Enseignant(const Personne& p){
        this->setAnneNaiss(p.getAnneNaiss());
        this->setNom(p.getNom());
        this->setPrenom(p.getPrenom());
}

Enseignant::Enseignant( const int anneNaiss, const string nom, const string prenom): 
                        Personne(anneNaiss, nom, prenom){
}

Enseignant::Enseignant(const Personne& p, const double cm, const double td){
        this->setAnneNaiss(p.getAnneNaiss());
        this->setNom(p.getNom());
        this->setPrenom(p.getPrenom());
        this->_cm = cm;
        this->_td = td;
}

//--
Enseignant& Enseignant::operator=(const Enseignant& anE){
    if (this != &anE){
        Personne::operator=(anE);
        _destroy();
        _copy(anE);
    }
    return *this;
}

//--
Enseignant::~Enseignant(void){
    _destroy();
}

//--
bool operator==(const Enseignant& anE1, const Enseignant& anE2){
    return anE1.isEqualTo(anE2);
}

//--
bool operator!=(const Enseignant& anE1, const Enseignant& anE2){
    return !(anE1==anE2);
}

//--
ostream& operator<<(ostream& os, const Enseignant& anE){
    anE.display(os);
    return os;
}

//--
istream& operator>>(istream& i, Enseignant& anE){
    anE.input(i);
    return i;
}

//--
void Enseignant::display(ostream& os) const{
    (void)os; // Pour eviter un warning si pas utilise
    Personne::display(os);
    os<< " les CMs: " << _cm << " les TDs:  " << _td << " ETD:  " << nombreETD() << endl;
}


//--
void Enseignant::input(istream& i) {
    (void)i; // Pour eviter un warning si pas utilise
    Personne::input(i);

    cout<< "faites entrer les cms: ";
    i >> this->_cm;
    cout<< "faites entrer les tds: ";
    i >> this->_td;
}


//--
double Enseignant::nombreETD() const{ return 1.5*_cm + _td; }

//--
bool Enseignant::isEqualTo(const Enseignant& anE) const{
    (void)anE; 

    if (!(Personne::isEqualTo(anE))) return false;
    return true;
}

//--
void Enseignant::_copy(const Enseignant& anE){
    (void)anE; // Pour eviter un warning si pas utilise
    this->_cm = anE._cm;
    this->_td = anE._td;
}

//--
void Enseignant::_destroy(void){
 // ### : Destruction des attributs de la classe Enseignant
 // Exemple : delete _at;
}

//Getters and setters:

double Enseignant::getCM()const{ return _cm; }
double Enseignant:: getTD()const{ return _td; }
void Enseignant::setCM(const double cm){ this->_cm = cm; }
void Enseignant::setTD(const double td){ this->_td = td; }
void Enseignant::similaire() const{ cout << "Je suis un enseignant" <<endl;}