#include <iostream>
#include "../partie1/Date.h"
#include "../partie2/Evenement.h"
#include "../partie3/Concert.h"
using namespace std;

int main(){

    Evenement e1(1234,"Gymnase Tom Ate");
    Date aujourdhui(18,12,2023) ;
    e1.ajouterDate(aujourdhui) ;
    e1.ajouterDate(25,1,2024) ;
    Evenement e2(19002, "Salle Anne Anass") ;
    Concert c1(e2, "Les Enerves") ;
    c1.ajouterDate(10,1,2024) ;
    c1.ajouterDate(20,12,2023) ;
    Concert c2(Evenement(927, "Salle O. Live "),"Thierry Golo") ;
    c2.ajouterDate(aujourdhui) ;

    
    cout << " e1 : " << e1 << endl ;
    cout << " c1 : "<< c1 << endl ;
    cout << " c2 : " << c2 << endl ;

    cout << " tarif pub pour e1 : " << e1.pub() << endl ;
    cout << " tarif pub pour c1 : " << c1.pub() << endl ;
    cout << " tarif pub pour c2 :" << c2.pub() << endl ;
	return 0;
}
