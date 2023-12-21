#include "Fraction.h"

Fraction::Fraction() {}

Fraction::Fraction(int n) {
    this->_numerateur = n;
}

Fraction::Fraction(int n, int d) {
    this->_numerateur = n;
    if(d!=0)
        this->_denominateur = d;
}

Fraction::Fraction(const Fraction& fraction) {
    _copy(fraction);
}

void Fraction::_copy(const Fraction& fraction){
    _numerateur = fraction._numerateur;
    _denominateur = fraction._denominateur;
}

void Fraction::_destroy(void){}

int Fraction::getDenominateur(){return this->_denominateur;}
int Fraction::getNumerateur(){return this->_numerateur;}

void Fraction::setDenominateur(int n){this->_numerateur = n;}
void Fraction::setNumerateur(int d){this->_denominateur=d;}


ostream& operator<<(ostream& cout, Fraction& fraction){

    cout << "Fraction: ";
    if(fraction.getDenominateur() != 1){
        cout << fraction.getNumerateur() << '/' << fraction.getDenominateur(); 
    }else{
        cout << fraction.getNumerateur(); 
    }
    return cout;
}

istream& operator>>(istream& i, Fraction& fraction){
    cout << "Enter numerator: ";
    i >> fraction._numerateur;
    cout << "Enter denominator: ";
    i >> fraction._denominateur;

    return i;
}


Fraction& Fraction::operator=(Fraction& fraction){
    if(this != &fraction){
        _copy(fraction);
    }

    return *this;
    
}

bool Fraction::operator==(Fraction& fraction){
    if(_numerateur*fraction._denominateur == _denominateur*fraction._numerateur){
        return true;
    }
    return false;
}

/*double operator+(Fraction& fraction1, Fraction& fraction2){

    double fact1 = fraction1._numerateur/fraction1._denominateur;
    double fact2 = fraction2._numerateur/fraction2._denominateur;
    return fact2 + fact1;
}*/

Fraction operator+(const Fraction& fraction1, const Fraction& fraction2){

    Fraction f(fraction1._numerateur*fraction2._denominateur + fraction1._denominateur*fraction2._numerateur, fraction1._denominateur* fraction2._denominateur);
    return f;
}

Fraction:: ~Fraction(){};