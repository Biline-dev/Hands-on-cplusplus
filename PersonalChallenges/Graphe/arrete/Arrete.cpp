                   // Fichier genere avec ./genere Arrete
#include "Arrete.h"

//--
Arrete::Arrete( /* ### */ ){}

//--
Arrete::Arrete(const Arrete& anA){
    _copy(anA);
}


//--
Arrete::Arrete(const int id_node, const double poid){
    _id_node = id_node;
    _poid = poid;
}

//--
Arrete& Arrete::operator=(const Arrete& anA){
    if (this != &anA){
        _destroy();
        _copy(anA);
    }
    return *this;
}

//--
Arrete::~Arrete(void)
{
 _destroy();
}

//--
bool operator==(const Arrete& anA1, const Arrete& anA2)
{
 return anA1.isEqualTo(anA2);
}

//--
bool operator!=(const Arrete& anA1, const Arrete& anA2){
    return !(anA1==anA2);
}

//--
ostream& operator<<(ostream& os, const Arrete& anA){
    anA.display(os);
    return os;
}

//--
void Arrete::display(ostream& os) const{
    (void)os;
    os << "voisin numero : "<< _id_node << " et je porte le poid : " << _poid << endl;
}

//--
bool Arrete::isEqualTo(const Arrete& anA) const{
 (void)anA; // Pour eviter un warning si pas utilise

 // ### : Test des attributs de la classe Arrete
 // Exemple : if (_at != anA._at) return false;
 return true;
}

//--
void Arrete::_copy(const Arrete& anA){
    (void)anA; 
    _id_node = anA.getIdNode();
    _poid = anA.getPoid();
}

//--
void Arrete::_destroy(void){  // juste qu'on fait le new, 
}


void  Arrete::setPoid(const double poid){
    _poid = poid;
}
void  Arrete::setIdNode(const int id_node){
    _id_node = id_node;
}
double  Arrete::getPoid() const{
    return _poid;
}
int  Arrete::getIdNode() const{
    return _id_node;
}