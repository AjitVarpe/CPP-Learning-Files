#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string a_name, string a_major, double a_gpa){
            name = a_name;
            major = a_major;
            gpa = a_gpa;
        }
         
         // object function
        bool has_honors(){
            if(gpa >= 3.7){
                return true;
            } else {
                return false;
            }
        }
};


int main(){

    Student student1("Atherv", "CS", 4);
    Student student2("Gaurav", "CS", 3.6);

    cout << student2.has_honors();

    return 0;

}