/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size_vect;
    int temp_value;
    int number_queries;
    int idx;
    vector<int> vecteur;

    cin >> size_vect;
    for(int i=0; i<size_vect; i++){
        cin >> temp_value;
        vecteur.push_back(temp_value);
    } 
    sort(vecteur.begin(), vecteur.end());
    cin >> number_queries;
    int idxs[number_queries];
    for(int i = 0; i<number_queries; i++){
        cin >> idx;
        vector<int>::iterator it = find(vecteur.begin(), vecteur.end(), idx);  
        //iterateur sur les pointeur d'un vecteur 
        if (it != vecteur.end()) {
            cout << "Yes " << distance(vecteur.begin(), it) +1 << endl;
        } else {
            vector<int>::iterator low;
            low = lower_bound (vecteur.begin(), vecteur.end(), idx);
            cout << "No " << (low- vecteur.begin()) +1<< std::endl ;
        }
    }

    return 0;
}
*/


// a more optmised version:


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int size_vect;
    std::cin >> size_vect;

    // Use vector constructor to read input directly into the vector
    std::vector<int> vecteur(size_vect);
    for (int i = 0; i < size_vect; ++i) {
        std::cin >> vecteur[i];
    }

    // Sort the vector
    std::sort(vecteur.begin(), vecteur.end());

    int number_queries;
    std::cin >> number_queries;

    int idx;
    for (int i = 0; i < number_queries; ++i) {
        std::cin >> idx;

        // Use binary search instead of std::find

        // lower_bound
        /*
        
        std::lower_bound is a C++ standard library algorithm that performs a binary search 
        on a sorted range to find the first position where an element could be inserted without 
        violating the ordering. It returns an iterator pointing to the first element 
        that is not less than the searched value.

        unlike However lower_bound, upper_bound returns an iterator pointing
        to the first element that is greater than the searched value.
        
        */
        std::vector<int>::iterator it = std::lower_bound(vecteur.begin(), vecteur.end(), idx);

        if (it != vecteur.end() && *it == idx) {
            std::cout << "Yes " << std::distance(vecteur.begin(), it) + 1 << std::endl;
        } else {
            std::cout << "No " << std::distance(vecteur.begin(), it) + 1 << std::endl;
        }
    }

    return 0;
}
