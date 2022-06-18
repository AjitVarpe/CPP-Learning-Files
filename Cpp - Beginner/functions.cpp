#include <iostream>

using namespace std;

// accesing say_hello() function in main fn.

void say_hello(string name, int age); // function stub

int main()
{
    say_hello("Atherv", 22);
    return 0;
}

void say_hello(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "I'm " << age << " years old" << endl;
}
