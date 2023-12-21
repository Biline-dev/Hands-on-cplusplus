#include <iostream>
#include "Figure.h"

using namespace std;

int main()
{
	Point p1(5, 8);
    Figure f1;
    vector<Point> elements = {Point(0, 5),Point(5, 5), Point(0, 0)};
    Figure f2(elements);
    Figure f3(f2);

    if(f1==f2){
        cout << f1 << " et " << f2 << "sont egaux" << endl;
    }else{
        cout << f1 << " et " << f2 << "ne sont pas egaux"<< endl;
    }
    
    if(f2==f3){
        cout << f2 << " et " << f3 << "sont egaux" << endl;
    }else{
        cout << f2 << " et " << f3 << "ne sont pas egaux"<< endl;
    }
    
    f1.ajouterPoint(p1);
    cout << f1<< endl;

    f1.ajouterPoint(6,99);
    cout << f1<< endl;
	return 0;
}
