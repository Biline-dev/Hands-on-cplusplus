#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void gap_function(string& text, int gap){

    for(int i =0; i<text.size(); i++){
        if(text[i]>= 'a' && text[i]<= 'z'){
            text[i]  = 'a' + (text[i] - 'a' + gap)%26;
        }else if(text[i]>= 'A' && text[i]<= 'Z'){
            text[i] = toupper('a' + (text[i] - 'a' + gap)%26);
        }else{
            text[i] = text[i];
        }
    } 
}
  

int main(){
    
    string text;
    int gap; 

    cout << "Enter your text: ";
    getline(cin, text);

    cout << "Enter your gap number: ";
    cin >> gap;

    gap_function(text, gap);
    cout << "The new text is " << text << "\n";


    cout << "\n\n----End of the program----\n";
    return 0;
}