#include <iostream>

using namespace std;


// using if-else statements

int main()
{
    bool is_male = true;
    bool is_tall = false;

    // using and operator.
    if(is_male && is_tall){ 
        cout << "You are a tall male";
    } else if(is_male && !is_tall) { // using not operator
        cout << "You are short male";
    } else if(!is_male && is_tall) { // using not operator
        cout << "You are tall but not male";
    } else {
        cout << "You are not a male";
    }
        
    return 0;
}
