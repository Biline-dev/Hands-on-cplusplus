#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    int queries;
    int type_query;
    int student_marks;
    string student_name;
    map <string,vector<int>> students;
    
    cin >> queries;
    
    for(int i=0; i<queries; i++){
        cin >> type_query;
        vector<int> marks;
        switch (type_query) {
            case 1:
                cin >> student_name >> student_marks;
                if (students.find(student_name) == students.end()){
                    marks.push_back(student_marks);
                    students.insert(make_pair(student_name,marks));
                }else{
                    students[student_name].push_back(student_marks);
                }
                break;
                
            case 2:  
                cin >> student_name;
                students[student_name]= marks;
                break;
                
            case 3:
                cin >> student_name;
                vector<int> marks_ = students[student_name];
                if(marks_.size()==0){
                    cout << "0"<< "\n";
                }else{
                    int sum=0;
                    for(int i=0; i<marks_.size(); i++){
                        sum+=marks_[i];
                    }
                    cout <<sum << "\n"; 
                }
                
                break;
        }
    }
    return 0;
}



