#include <iostream>
#include "File.cpp"
using namespace std;



int main(void){


    File<int> f;
    cout << f;

    File<int> f1;
    int tempValue;
    for(int i=0; i< 3; i++){
        cout << "Add to the queue: ";
        cin >> tempValue;
        f1.addInFile(tempValue);

    }
    
    cout << f1;
    f1.removeFirsFromtFile();
    cout << f1;

    return 0;
}







