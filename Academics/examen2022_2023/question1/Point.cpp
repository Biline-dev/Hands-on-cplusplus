                   // Fichier genere avec ./genere Point
#include "Point.h"

//--
Point::Point( /* ### */ ){}


//--
Point::Point( const double d1, const double d2){

    this->_x = d1;
    _y = d2;

}

//--
Point::Point( const double d1){

    this->_x = d1;
    _y = 0;

}
//--
Point::Point(const Point& aQ){
    _copy(aQ);
}

//--
Point& Point::operator=(const Point& aQ){
    if (this != &aQ){
        _destroy();
        _copy(aQ);
    }
    return *this;
}

//--
Point::~Point(void){
 _destroy();
}

//--
bool operator==(const Point& aQ1, const Point& aQ2){
 return aQ1.isEqualTo(aQ2);
}

//--
bool operator!=(const Point& aQ1, const Point& aQ2){
 return !(aQ1==aQ2);
}

//--
ostream& operator<<(ostream& os, const Point& aQ){
 aQ.display(os);
 return os;
}

//--
void Point::display(ostream& os) const{
    (void)os; 
    os << "("  <<  _x <<", "<< _y <<")";
}

//--
bool Point::isEqualTo(const Point& aQ) const{
    (void)aQ; // Pour eviter un warning si pas utilise
    if(_x!= aQ._x) return false;
    if(_y!= aQ._y) return false;
 return true;
}

//--
void Point::_copy(const Point& aQ){
    (void)aQ; // Pour eviter un warning si pas utilise
    _x = aQ._x;
    _y =aQ._y;
}

//--
void Point::_destroy(void){
 // ### : Destruction des attributs de la classe Point
 // Exemple : delete _at;
}

double Point::getX() const{
    return _x;
}
double Point::getY() const{
    return _y;
}
void Point::setX(double x){
    this->_x = x;

}
void Point::setY(double y){
    this->_y = y;

}

