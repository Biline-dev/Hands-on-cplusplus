#include <iostream>
#include "A.h"
#include "B.h"
#include <vector>
using namespace std;




template <class T>
void function(T t, int n){
    for(int i=0; i<n; i++){
        cout << t[i];
    }
}


int main(){

    B b5;
    cout << b5.f()<<endl;  // ma réponse est 10
    
    int integerArray[] = {5, 8, 1};
    function(integerArray, 3);
    

    vector<int> v = {1,7,8,5};
    vector<int> v1;
    vector<int>& v2 = v;
    v1 = v;

    v1.push_back(78);
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;
    for(int i =0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }

cout << endl;
    v2.push_back(108);
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    B b;
    A a;
    B b1;
    A a1;

    b1=b;
    a1=b;

    b.g();
    //b=a1;  //ça c'est faux
    
    cout << a.f()<<endl;
    cout << b.f()<<endl;  // ma réponse est 10

    cout << a1.f()<<endl;
    cout << b1.f()<<endl;  // ma réponse est 10
	return 0;
}
