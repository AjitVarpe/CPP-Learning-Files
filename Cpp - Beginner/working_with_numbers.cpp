#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 5.5;
    wnum++; // to increment 1

    dnum--; // to decrement 1

    cout << wnum << endl;
    cout << dnum << endl;
    cout << wnum + dnum << endl;
    cout << 10.0 / 3.0 << endl;
    cout << 10 / 3 << endl;

    cout << pow(wnum, 2) << endl; // fn to use power ex. wnum ^ 2
    
    cout << sqrt(121) << endl; // to find a square root of given number

    cout << round(dnum) << endl; // to round a digit

    cout << ceil(4.01) << endl; // to round a number to highest whole number

    cout << floor(4.8) << endl; // to round a number to lowest whole number

    cout << fmax(10,5) << endl; // to find the maximum number from 2 digits.

    cout << fmin(10,5) << endl; // to find the maximum number from 2 digits.
}

