#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int a=10;
    int b=20;

    cout<<"Numbers before swap are a = "<< a<<" b : "<<b<<endl;
    int temp = a;
    a = b;
    b =temp;
    cout<<"After changing Values are a : "<<a <<" b : "<<b;



    return 0;
}