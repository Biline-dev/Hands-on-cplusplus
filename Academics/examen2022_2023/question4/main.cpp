#include <iostream>
#include "../question3/Quadrilatere.h"
#include "../question3/Triangle.h"

using namespace std;




int main() {
    Quadrilatere q(Point(0,0),Point(5,0),Point(5,5),Point(0,5));
    Triangle t(Point(-0.5,5),Point(2.5,7),Point(5.5,5));
    Figure maison=q+t;
    cout << q << endl;
    cout << t << endl;
    cout << maison << endl;
    maison.deplace(20,0);
    cout << maison << endl;
}