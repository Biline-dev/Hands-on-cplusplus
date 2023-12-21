#include <iostream>
#include "Quadrilatere.h"
#include "Triangle.h"

using namespace std;

int main()
{

    Quadrilatere q1(Point(0, 5),Point(5, 5), Point(0, 0), Point(0, 5));
    Triangle t1(Point(0, 5),Point(5, 5), Point(0, 0));

    cout << q1 << endl;
    cout << t1 << endl;
	return 0;
}
