#include <iostream>
#include <vector>
#include "Vecteurs.cpp"
#include <algorithm>


using namespace std;



int main(void){

    Vecteurs<int> v({7, 8, 6});
    cout << v.getFile()[0]<<endl;
    cin >> v;

/*
Vecteurs<int> v({7, 8, 6});

cout << v.getFile()[0]<<endl;*/


//ajouter dans un vecteur
/*vector<int> vec;
vec.push_back(42);
vec.insert(vec.begin() + 1, 99);


//supprimer d'un vecteur
vector<int> vec = {1, 2, 3, 4};
vec.pop_back();

std::vector<int> vec = {1, 2, 3, 4, 5};
vec.erase(vec.begin() + 2);         // Supprime l'élément à la position 2
vec.erase(vec.begin() + 1, vec.end());// Supprime tous les éléments à partir de la position 1 jusqu'à la fin

std::vector<int> vec = {1, 2, 3, 4};
vec.clear();

vector<int> vec = {1, 2, 3, 4, 2, 5};
vec.erase(remove(vec.begin(), vec.end(), 2), vec.end());

//iterer sur un vecteur
std::vector<int> vec = {1, 2, 3, 4, 5};

// Utilisation d'un itérateur
for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
    }*/


return 0;
}