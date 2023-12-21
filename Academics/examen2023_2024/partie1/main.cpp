#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date d1;
    Date d2(24, 12, 2024);
    Date d3(d2);

    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;


    // test =/= ==
    cout << (d1==d2) << endl;
    cout << (d2==d3) << endl;
    cout << (d1!=d3) << endl;

    // test set get
    d1.setJour(28);
    d1.setMois(9);
    d1.setAnnee(2023);
    cout << d1.getAnnee() << "/" << d1.getJour() << "/" << d1.getMois() << endl;

    Date date_decal = d1 +6;

    cout <<  "date decale: " << date_decal << endl;


	return 0;
}
