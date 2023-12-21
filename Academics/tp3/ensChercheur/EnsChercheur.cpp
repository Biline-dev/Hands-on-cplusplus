                   // Fichier genere avec ./genere EnsChercheur
#include "EnsChercheur.h"

//--
EnsChercheur::EnsChercheur( /* ### */ ) : Chercheur( /* ### */ ),Enseignant( /* ### */ ){}

//--
EnsChercheur::EnsChercheur(const EnsChercheur& anE) : Chercheur(anE),Enseignant(anE){
    _copy(anE);
}

//--
EnsChercheur::EnsChercheur( int anneNaiss, string nom, string prenom, const string dom_rech, 
                            const double cm, const double td): Enseignant(anneNaiss,nom, prenom){
    setDomRecherche(dom_rech);
    setCM(cm);
    setTD(td);
}

//--
EnsChercheur& EnsChercheur::operator=(const EnsChercheur& anE){
    if (this != &anE){
        Chercheur::operator=(anE);
        Enseignant::operator=(anE);
        _destroy();
        _copy(anE);
    }
    return *this;
}


//--
EnsChercheur::EnsChercheur(const Enseignant& anE, const Chercheur& aC){


    if((Personne)anE==(Personne)aC){
        Enseignant::setAnneNaiss(anE.getAnneNaiss()); 
        Enseignant::setNom(anE.getNom());
        Enseignant::setPrenom(anE.getPrenom());
        setCM(anE.getCM());
        setTD(anE.getTD());
        setDomRecherche(aC.getDomRecherche());
    }else{
        //EnsChercheur();
    } 
}

//--
EnsChercheur::EnsChercheur(const Personne& aP, const string dom_rech, const double cm, const double td){
    Enseignant::setAnneNaiss(aP.getAnneNaiss()); 
    Enseignant::setNom(aP.getNom());
    Enseignant::setPrenom(aP.getPrenom());
    Chercheur::setDomRecherche(dom_rech);
    Enseignant::setCM(cm);
    Enseignant::setTD(td);
}

//--
EnsChercheur::~EnsChercheur(void){
    _destroy();
}

//--
bool operator==(const EnsChercheur& anE1, const EnsChercheur& anE2){
    return anE1.isEqualTo(anE2);
}

//--
bool operator!=(const EnsChercheur& anE1, const EnsChercheur& anE2){
    return !(anE1==anE2);
}

//--
ostream& operator<<(ostream& os, const EnsChercheur& anE){
    anE.display(os);
    return os;
}

//--
void EnsChercheur::display(ostream& os) const{
    (void)os; // Pour eviter un warning si pas utilise
    Enseignant::display(os);
    os << "Domaine de recherche: "<< Chercheur::getDomRecherche() << endl;
}


//--
void EnsChercheur::input(istream& i){
    (void)i; // Pour eviter un warning si pas utilise

    Chercheur::input(i);
    Enseignant::input(i);

}

//--
bool EnsChercheur::isEqualTo(const EnsChercheur& anE) const{
    (void)anE; // Pour eviter un warning si pas utilise
    if (!(Chercheur::isEqualTo(anE))) return false;
    if (!(Enseignant::isEqualTo(anE))) return false;
    return true;
}

//--
void EnsChercheur::_copy(const EnsChercheur& anE){
 (void)anE; // Pour eviter un warning si pas utilise
}

//--
void EnsChercheur::_destroy(void)
{
 // ### : Destruction des attributs de la classe EnsChercheur
 // Exemple : delete _at;
}

void EnsChercheur::similaire() const{ cout << "Je suis un enseignant chercheur" <<endl;}