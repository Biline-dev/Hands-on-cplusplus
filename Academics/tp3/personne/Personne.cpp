                   // Fichier genere avec ./genere Personne
#include "Personne.h"

//--
Personne::Personne( /* ### */ ){}


//--

Personne::Personne (const int anne_naiss, const string nom, const string prenom){

    this->anne_naiss = anne_naiss;
    this->nom = nom;
    this->prenom = prenom;
}

//--
Personne::Personne(const Personne& aP){
    _copy(aP);
}

//--
Personne& Personne::operator=(const Personne& aP){
    if (this != &aP){
    _destroy();
    _copy(aP);
    }
    return *this;
}

//--
Personne::~Personne(void){
    _destroy();
}

//--
bool operator==(const Personne& aP1, const Personne& aP2){
    return aP1.isEqualTo(aP2);
}

//--
bool operator!=(const Personne& aP1, const Personne& aP2){
    return !(aP1==aP2);
}


//--
bool operator<(const Personne& aP1, const Personne& aP2){
    return aP1.isInferior(aP2);
}


//--
ostream& operator<<(ostream& os, const Personne& aP)   {
    aP.display(os);
    return os;
}

//--
istream& operator>>(istream& i,  Personne& aP)   {
    aP.input(i);
    return i;
}

//--
void Personne::display(ostream& os) const{
    (void)os; // Pour eviter un warning si pas utilise
    os << " Prenom: " << getPrenom() << " Nom: " << getNom() <<" Année de naissance: "<< getAnneNaiss()<<endl;
}

//--
void Personne::input(istream& i) {
    (void)i; // Pour eviter un warning si pas utilise
    
    cout << "faite entrer l'age: ";
    i >> anne_naiss;
    cout << "faites entrer le nom: ";
    i >> nom; 
    cout << "faites entrer le prenom: ";
    i >> prenom;
}

//--
bool Personne::isEqualTo(const Personne& aP) const{
    (void)aP; // Pour eviter un warning si pas utilise

    // ### : Test des attributs de la classe Personne
    // Exemple : if (_at != aP._at) return false;
    if(anne_naiss!=aP.anne_naiss) return false;
    if(nom != aP.nom) return false;
    if(prenom != aP.prenom) return false;

    return true;

}


//--

bool Personne:: isInferior(const Personne& aP) const{

    if(nom<aP.nom) return true;
    if(nom==aP.nom){
        if(prenom<aP.prenom) return true;
        else return false;
    }
    return false;
}

//--
void Personne::_copy(const Personne& aP){
    (void)aP; // Pour eviter un warning si pas utilise
    anne_naiss = aP.anne_naiss;
    nom = aP.nom;
    prenom = aP.prenom;
    
 // ### : Affectation des attributs de la classe Personne
 // Exemple : _at = aP._at; aP0
}

//--
void Personne::_destroy(void)
{
 // ### : Destruction des attributs de la classe Personne
 // Exemple : delete _at;
 // dans les cas des structure tel que les tableaux, les cgar*, les poitneur en genrale.
}

// getters and setters 

int Personne::getAnneNaiss() const {return this->anne_naiss;}
string Personne::getNom() const {return this->nom;}
string Personne::getPrenom() const {return this->prenom;}

void Personne::setAnneNaiss(const int anne_naiss){this->anne_naiss =anne_naiss; }
void Personne::setNom(const string nom){ this->nom = nom;}
void Personne::setPrenom(const string prenom){this->prenom = prenom;}