                   // Fichier genere avec ./genere Figure
#include "Figure.h"

//--
Figure::Figure( /* ### */ ){}

//--
Figure::Figure(const Figure& aQ){
    _copy(aQ);
}

//--
Figure::Figure(const vector<Point> vecteur_point){
   this->vecteur_point = vecteur_point;
}

//--
Figure& Figure::operator=(const Figure& aQ){
    if (this != &aQ){
        _destroy();
        _copy(aQ);
    }
    return *this;
}

//--
Figure::~Figure(void){
    _destroy();
}

//--
bool operator==(const Figure& aQ1, const Figure& aQ2)
{
 return aQ1.isEqualTo(aQ2);
}

//--
bool operator!=(const Figure& aQ1, const Figure& aQ2){
 return !(aQ1==aQ2);
}


//--
Figure operator+(const Figure& aQ1, const Figure& aQ2){

    vector<Point> elements = aQ1.getVecteurPoint();
    for(int i=0; i<aQ2.size(); i++){
        elements.push_back(aQ2.getVecteurPoint()[i]);
    }
    return Figure(elements);
}


//--
ostream& operator<<(ostream& os, const Figure& aQ){
    aQ.display(os);
    return os;
}

//--
void Figure::display(ostream& os) const{
    (void)os; 

    os << "les points de la figure sont : {";
    for(int i=0; i<vecteur_point.size(); i++){
        os << vecteur_point[i];
    }
    os << "}";
}

//--
bool Figure::isEqualTo(const Figure& aQ) const{

    (void)aQ; 
    if(vecteur_point != aQ.vecteur_point) return false;
    return true;
}

//--
void Figure::_copy(const Figure& aQ){
    (void)aQ; 
    vecteur_point = aQ.vecteur_point;
}

//--
void Figure::_destroy(void){

}

void Figure::ajouterPoint(const Point point){
    vecteur_point.push_back(point);
}
void Figure::ajouterPoint(const double d1, const double d2){
    vecteur_point.push_back(Point(d1, d2));
}
vector<Point> Figure::getVecteurPoint() const{
    return vecteur_point;
}

void Figure::setVecteurPoint(vector<Point> newVector){
    vecteur_point = newVector;
}
int Figure::size() const{
    return vecteur_point.size();
}

void Figure::deplace(const double x, const double y){

    vector<Point> elements = getVecteurPoint();
    for(int i=0; i<this->size(); i++){
        elements[i].setX(elements[i].getX()+x);
        elements[i].setY(elements[i].getY()+y);
    }
    setVecteurPoint(elements);

}

