#include <iostream>
#include "../partie2/Evenement.h"
#include "Concert.h"
using namespace std;

int main()
{
    Evenement e1;
    Evenement e2(24, "paris");
    Evenement e3(e2);

    Date dates1(24, 12, 2024);
    Date dates2(24, 12, 2023);
    Evenement event(24, "paris", {dates1, dates2});

    

    Concert c1;
    
    Concert c2(event, "imagine dragons");
    Concert c3(c2);


    cout << c3 << endl;


    // test =/= ==
    cout << (c1==c2) << endl;
    cout << (c2==c3) << endl;
    cout << (c1!=c3) << endl;



	return 0;
}
