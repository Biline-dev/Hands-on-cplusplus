#include <iostream>
#include "Evenement.h"

using namespace std;

int main()
{
    Evenement e1;
    Evenement e2(24, "paris");
    Evenement e3(e2);

    Date dates1(24, 12, 2024);
    Date dates2(24, 12, 2023);

    
    Evenement event(24, "paris", {dates1, dates2});
    cout << event << endl;


    // test =/= ==
    cout << (e1==e2) << endl;
    cout << (e2==e3) << endl;
    cout << (e1!=e3) << endl;



	return 0;
}
