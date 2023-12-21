#include <iostream>
#include "Fraction.h"

using namespace std;



int main(void){

    Fraction P, Q;
    Fraction f(10);
    Fraction f1(10, 3);
    cout << f1 << endl;
    Q = P = f1;
    cout << P << " " << Q << endl;

    cin >> P;
    cout << P << " " << Q << endl;
    cout << (Q==f1) << endl;

    Fraction sum = P+3;
    cout << sum << endl; 



}