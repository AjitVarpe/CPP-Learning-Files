#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int a=10;
    int b=20;

    cout<<"Numbers before swap are a = "<< a<<" b : "<<b<<endl;
    
    // Logic 1 Using Third Variable
    // int temp = a;
    // a = b;
    // b =temp;

    // Logic 2 Without using third variable using + and - 
    // a=a+b;
    // b=a-b;
    // a=a-b;

    // logic 3 Without Using third Variable using * and / sign
    // a=a*b;
    // b=a/b;
    // a=a/b;

    // Logic 4 without using third variable swaping values
    // a=a^b;
    // b=a^b;
    // a=a^b;

    
    cout<<"After changing Values are a : "<<a <<" b : "<<b;



    return 0;
}