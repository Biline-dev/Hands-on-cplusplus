#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


/*
    Here we gonna learn about stringstream.

    "The getline" function in C++ is used to read a line from an input stream. 
    It's often used with input streams like cin to read an entire line of text, 
    including any spaces, until a specified delimiter is encountered 
    (default delimiter is the newline character '\n'). 
    The extracted line is stored in a string variable
*/

vector<int> parseInts(string str) {
	vector<int> vecteurIntegers;
    string tempNumber;
    for(int i=0; i<str.size(); i++){
        tempNumber="";
        while(str[i]!=',' && i<str.size()){
            cout << str[i] << "\n";
            tempNumber +=str[i];
            i++;
        }
        vecteurIntegers.push_back(stoi(tempNumber));  
    }
    return vecteurIntegers;
}

int main() {
    string str;
    cin >> str;
    cout << str << "\n";
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

/*

    std::stringstream is a class in C++ that is part of the <sstream> header and is used 
    for parsing and formatting strings. It allows you to treat strings as streams, 
    similar to input/output streams (std::cin and std::cout).

*/

// ======= Example:
/*

        #include <iostream>
        #include <sstream>

        int main() {
            int number = 42;
            std::stringstream ss;
            ss << "The number is: " << number;

            std::string result = ss.str();
            std::cout << result << std::endl;

            return 0;
        }

*/