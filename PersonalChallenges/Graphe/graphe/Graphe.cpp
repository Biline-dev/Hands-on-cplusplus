                   // Fichier genere avec ./genere Graphe
#include "Graphe.h"

//--
Graphe::Graphe( /* ### */ ){}

//--
Graphe::Graphe(const Graphe& aG){
    _copy(aG);
}

//-- 
Graphe::Graphe(const vector<Noeud> graphe){
    _graphe = graphe;
}

//--
Graphe& Graphe::operator=(const Graphe& aG){
 if (this != &aG){
    _destroy();
    _copy(aG);
 }
 return *this;
}

//--
Graphe::~Graphe(void){
 _destroy();
}

//--
bool operator==(const Graphe& aG1, const Graphe& aG2){
    return aG1.isEqualTo(aG2);
}

//--
bool operator!=(const Graphe& aG1, const Graphe& aG2){
 return !(aG1==aG2);
}

//--
ostream& operator<<(ostream& os, const Graphe& aG)
{
 aG.display(os);
 return os;
}

//--
void Graphe::display(ostream& os) const{
    (void)os; 
    os << "Le graphe : "<< endl;

    os << " {  " << endl;
    for(int i=0; i<_graphe.size();i++){
        cout<< "  " << _graphe[i] << endl;
        
    }
    os << " }  " << endl;
}

//--
bool Graphe::isEqualTo(const Graphe& aG) const{
    (void)aG; 
    return true;
}

//--
void Graphe::_copy(const Graphe& aG){
    (void)aG; 
    _graphe = aG.getGraphe();
}

//--
void Graphe::_destroy(void){}

//--
vector<Noeud> Graphe::getGraphe() const{
    return _graphe;
}

//--
void Graphe::setGraphe(const vector<Noeud> graphe){
    _graphe =graphe;
}

//--
int Graphe::size() const{
    return _graphe.size();
}

//--
vector<Noeud> Graphe::parcoursDjikstra(const int id_start, const int id_end) const{


    vector<Noeud> parcoursTemp;
    vector<Noeud> parcours;

    


}