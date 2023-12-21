                   // Fichier genere avec ./genere Chercheur
#include "Chercheur.h"

//--
Chercheur::Chercheur( /* ### */ ) : Personne( /* ### */ ){}

//--
Chercheur::Chercheur(const Chercheur& aC) : Personne(aC){
    _copy(aC);
}

//--
Chercheur::Chercheur(const int anneNaiss, const string nom, const string prenom,  
                     const string dom_rech): Personne(anneNaiss, nom, prenom){
    this->dom_recherche = dom_rech;
}

//--
Chercheur::Chercheur(const string dom_rech){
   this->dom_recherche = dom_rech;
}

//--
Chercheur::Chercheur(const Personne& aP, const string dom_rech){
    setAnneNaiss(aP.getAnneNaiss());
    setNom(aP.getNom());
    setPrenom(aP.getPrenom());
}

//--
Chercheur& Chercheur::operator=(const Chercheur& aC){
    if (this != &aC){
        Personne::operator=(aC);
        _destroy();
        _copy(aC);
    }
    return *this;
}

//--
Chercheur::~Chercheur(void){
    _destroy();
}

//--
bool operator==(const Chercheur& aC1, const Chercheur& aC2){
    return aC1.isEqualTo(aC2);
}

//--
bool operator!=(const Chercheur& aC1, const Chercheur& aC2){
    return !(aC1==aC2);
}

//--
ostream& operator<<(ostream& os, const Chercheur& aC){
    aC.display(os);
    return os;
}

//--
istream& operator>>(istream& i, Chercheur& aC){
    aC.input(i);
    return i;
}

//--
void Chercheur::display(ostream& os) const{
 (void)os; // Pour eviter un warning si pas utilise

 Personne::display(os);

 os << "domaine de recherche: " << dom_recherche << endl;
}

//--
void Chercheur::input(istream& i){
    (void)i;
    Personne::input(i);
    cin.ignore();
    cout << "faites entrer le domaine de recherche";
    getline(i, this->dom_recherche); 

    cout << "faites entrer le domaine de recherche";
    //i >> dom_recherche;

}

//--
bool Chercheur::isEqualTo(const Chercheur& aC) const{
    (void)aC; // Pour eviter un warning si pas utilise
    if (!(Personne::isEqualTo(aC))) return false;
    return true;
}

//--
void Chercheur::_copy(const Chercheur& aC){
    (void)aC; // Pour eviter un warning si pas utilise

}

//--
void Chercheur::_destroy(void)
{
 // ### : Destruction des attributs de la classe Chercheur
 // Exemple : delete _at;
}

//getters and setters

string Chercheur::getDomRecherche()const{return dom_recherche;}
void Chercheur::setDomRecherche(const string dom_rech){dom_recherche = dom_rech;}

void Chercheur::similaire() const{ cout << "Je suis un chercheur " <<endl;}