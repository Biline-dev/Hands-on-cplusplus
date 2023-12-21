#include <iostream>
#include "Noeud.h"

using namespace std;

int main(){

    Arrete a1(7, 15.5);
    Arrete a2(6, 78.5);
    Noeud n1(8, {a1, a2});
    cout << n1;
	return 0;
}