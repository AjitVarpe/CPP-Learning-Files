#include <iostream>

using namespace std;

int main(){

    /* 
    - pointers are memory address of data
    - using & + variable_name gives the memory address
    - can store a address in  a variable using *
    - dereferecing a pointer to grab the value store at a
        physical location
    */


    int age = 19;
    int *p_age = &age; 

    double gpa = 2.7;
    double *p_gpa = &gpa;

    string name = "Mike";
    string *p_name = &name;

    cout << *p_age << endl; // dereferecing a pointer
}
