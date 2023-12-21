#include <iostream>
#include "Graphe.h"

using namespace std;

int main(){

    Arrete a1(7, 15.5);
    Arrete a2(6, 78.5);
    Arrete a3(4, 7.5);
    Noeud n1(8, {a1, a2});
    Noeud n2(5, {a2, a3});
    Graphe g1({n1, n2});
    cout << g1;
	return 0;
}