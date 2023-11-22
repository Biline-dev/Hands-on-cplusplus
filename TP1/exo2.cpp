#include <iostream>
#include <string>
#include <cctype>

using namespace std;


// beline --mirror_string--> enileb
void mirror_string(string& text){

    string temp_text = "";
    for(int i = text.size()-1; i>=0; i--){
        temp_text += text[i];
    } 
    text = temp_text;
}
  

// 1234 --mirror_int--> 4321
void mirror_int(int& number){

    int new_number = 0;
    int numberTemp = number;

    while(numberTemp/10>0){
        new_number = new_number*10 + numberTemp%10;
        numberTemp /=10;
    }
    new_number = new_number*10 + numberTemp%10;
    number = new_number;
}

int main(){
    
    int number;
    string text;
    int gap; 

    // Test mirror int 
    cout << "Enter your number: ";
    cin >> number;
    mirror_int(number);
    cout << "The new number is " << number << "\n";

    // Test mirror string
    cout << "Enter your text: ";
    getline(cin, text);
    mirror_string(text);
    cout << "The new text is " << text << "\n";

    cout << "\n\n----End of the program----\n";
    return 0;
}