#include <iostream>
#include <cmath>
#include <ctime>
#include<cstdlib>

using namespace std; //you'll be using std int he whole file
int main(){
    /*int x = 0;
    int y= x++;  // x= 1, y=0
    int z= ++x;  // x= 2, z=2
    const double sales = 95000;
    double state_tax = 4*sales/100;
    double country_tax = 2*sales/100;  
    //better use variable o define each caluculation
    cout << "total sales = "<<sales <<endl<< "state tax = "<<state_tax <<endl<<"state tax = "<<country_tax <<endl; //statement
    */
    //return 0; // it means that out program ended correctly

    // always initilise your virriables in c++
    //seperate lines for declraton
    //double for stuff like float, we have int, 

   /* cout <<"Enter a value in fahrenheit: ";
    double value;
    cin >> value;
    cout <<value;*/


    // write code to explain why and how, not what, it's important to know that
    /*cout <<"Enterrayon : ";
    int rayon;
    cin >> rayon;
    const double pi= 3.14;
    double result = pi*pow(rayon, 2);

    cout << "my result "<<result;*/

    //staticaly types/ dynamically types
    // int, double, short, float, long, long long, double long, bool, char
    /*
    auto i = 36.22f; // why f? 
    //there's also something like bracket initilisation, that prevent to make some mstakes

    int number{}; // for instance here number is initlisaed to 0
    
    int number_two = 0xff;  // haxadecimal
    int number_two = 0b1111111111;  //binary

    // how to define negative number?
    // if you use unsigned it doesn't allow you to use negative values
    cout <<number_two;
    // nerrowing problem is when you change type without considering the overflow
    */
    //random numbers
   // long elapsdDecondes = time(nullptr); //0
    srand(time(nullptr));
    int maxValue  =6;
    int minValue  =0;
    int number = (rand() % (maxValue - minValue + 1)) + minValue;
    
    cout <<number;
    return 0;
}


// toupper() for uppercase
// tolower() for lowercase

/*
a=(a op b) ? a: b;
means:

if a op b == true so a = a else b

*/