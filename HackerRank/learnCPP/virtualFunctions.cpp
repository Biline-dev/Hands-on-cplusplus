#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



class Person{    
    public:
        int age;
        string name;
        Person(void){}
        virtual void getdata() {}
        virtual void putdata() {}
};


class Professor : public Person{
    private:
        int publications;
        int cur_id; 
    public:
        static int id;
        Professor(void){
            id++;
        }
        Professor(Professor& prof){
            this->age = prof.age;
            this->name = prof.name;
            this->publications = prof.publications;
        }

        virtual void getdata(){
            this->cur_id = id;
            cin >> name >> age >> publications;
        }
        virtual void putdata(){  
            cout << this->name << " " << this->age << " " <<this->publications << " " <<cur_id << endl;
        }
    
};


class Student : public Person{
    private:
        double marks[6];
        int cur_id;
    public:
        static int id;
        Student(void){
            id++;
        }
        virtual void getdata(){
            int temp_value;
            
            this->cur_id = id;
            cin >> name >> age;
            for(int i=0; i<6; i++){
                cin >> temp_value;
                marks[i] = temp_value;
            }
        }
        virtual void putdata(){  
            
            int sum_=0;
            int current_id = id;
            for(int i=0; i<6; i++){
               sum_ +=marks[i];
            }
            cout << this->name << " " << this->age << " " <<sum_<< " " <<cur_id << endl;
        }
};


int Professor::id = 0;
int Student::id = 0;



int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
