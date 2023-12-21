#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
   In this exercise, we are asked to sort an array of any type.

*/

// We use a generic type template.
template <typename T>
void trieFort(T tabElement[], int size){

    /*
        In C++, when an array is passed as an argument to a function,
        it is automatically converted to a pointer to its first element.
    */

    T tempElm;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(tabElement[i] > tabElement[j]){
                tempElm = tabElement[j];
                tabElement[j] = tabElement[i];
                tabElement[i] = tempElm;
            }
        }
    }
}
  

int main(){

    int integerArray[] = {5, 8, 1, 3, 9};
    float floatArray[] = {5.4, 8.8, 13, 3.1, 9.2};
    char charArray[] = {'a', 'p', 'c', 't', 'l'};
    string stringArray[] = {"hello", "frequent", "loving", "beline", "hi"};

    int size = sizeof(integerArray) / sizeof(integerArray[0]);

    trieFort(integerArray, size);

   /* trieFort(floatArray, 5);
    trieFort(charArray, 5);
    trieFort(stringArray, 5);*/

    cout << "Sorted Integer Array: ";
    for(int i = 0; i < size; i++){
        cout << integerArray[i] << " ";
    }

    cout << "\n\n----End of the program----\n";
    return 0;
}
