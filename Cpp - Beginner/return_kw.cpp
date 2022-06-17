#include <iostream>

using namespace std;

double cube(double num)
{
    return num * num * num;  
}

int main()
{
    double answer = cube(7.0);
    cout << answer;
}