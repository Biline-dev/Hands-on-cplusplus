#ifndef Fraction_H 
#define Fraction_H
#include <iostream>

using namespace std; 


class Fraction {

    public: 

        Fraction(void);
        Fraction(int n);
        Fraction(int n, int d);
        Fraction(const Fraction& fraction);
        
        void setDenominateur(int d);
        void setNumerateur(int n);
        int getDenominateur();
        int getNumerateur();
        virtual ~Fraction(void);
        Fraction& operator=(Fraction& fraction);
        bool operator==(Fraction& fraction);
 
        friend ostream& operator<<(ostream& cout, Fraction& fraction);
        friend istream& operator>>(istream& i, Fraction& fraction);
        friend Fraction  operator+(const Fraction& fraction1, const Fraction& fraction2);

    private:

        int _denominateur=1;
        int _numerateur=0;

        void _copy(const Fraction& fraction);
        void _destroy(void);

};

#endif