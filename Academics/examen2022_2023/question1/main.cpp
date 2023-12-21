#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point p1(5.9, 8);
    Point p2(5);
    Point p3;
    Point p4(p2);

    double a = 5.8;
    cout << a << endl;

    if(p1==p2){
        cout << p1 << " et " << p2 << "sont egaux" << endl;
    }else{
        cout << p1 << " et " << p2 << "ne sont pas egaux"<< endl;
    }
    
    p1.setX(100);
    p1.setY(180);
    cout << p1.getX() << " " << p1.getY() << endl;
	return 0;
}
