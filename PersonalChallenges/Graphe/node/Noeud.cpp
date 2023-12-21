                   // Fichier genere avec ./genere Noeud
#include "Noeud.h"

//--
Noeud::Noeud( /* ### */ ){}

//--
Noeud::Noeud(const Noeud& aN){
    _copy(aN);
}


//--
Noeud::Noeud(const int id_node, const vector<Arrete> voisins){
    _id_node = id_node;
    this->voisins = voisins;
}

//--
Noeud& Noeud::operator=(const Noeud& aN){
    if (this != &aN){
        _destroy();
        _copy(aN);
    }
    return *this;
}

//--
Noeud::~Noeud(void){
    _destroy();
}

//--
bool operator==(const Noeud& aN1, const Noeud& aN2){
    return aN1.isEqualTo(aN2);
}

//--
bool operator!=(const Noeud& aN1, const Noeud& aN2){
    return !(aN1==aN2);
}

//--
ostream& operator<<(ostream& os, const Noeud& aN){
    aN.display(os);
    return os;
}

//--
void Noeud::display(ostream& os) const{
    (void)os; 
    os << "Je suis le noeud numero : " << _id_node << " et mes voisin sont: " << endl;
    os << "     {" << endl;
    for(int i=0; i< voisins.size(); i++){
        os << "       "<< voisins[i] << endl;
    }

    os << "     }";
}

//--
bool Noeud::isEqualTo(const Noeud& aN) const{
    (void)aN; 
    return true;
}

//--
void Noeud::_copy(const Noeud& aN){
    (void)aN; 
    _id_node = aN.getIdNode();
    this->voisins = aN.getVoisins();

}

//--
void Noeud::_destroy(void){}

//--
void Noeud::setVoisins(const vector<Arrete> voisins){
    this->voisins = voisins;
}

//--
void Noeud::setIdNode(const int id_node){
    this->_id_node = id_node;
}

//--
vector<Arrete> Noeud::getVoisins() const{
    return voisins;
}

//--
int Noeud::getIdNode() const{
    return _id_node;
}

//--
void Noeud::setVisited(const bool visited){
    _visited = visited;
}

//--
void Noeud::setDistanceFromStart(const double distance){
    _distance_from_start = distance;
}

//--
bool Noeud::getVisited() const{
    return _visited;
}

//--
double Noeud::getDistanceFromStart() const{
    return _distance_from_start;
}
