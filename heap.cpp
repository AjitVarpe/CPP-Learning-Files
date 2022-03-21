#include<bits/stdc++.h>
#include<limits>
#include<iostream>
using namespace std;

int main(){
    int a=10;  // Element stored in normal stack
    int *p = new int();  // Allocating memeroy in heap
    *p = 10; 
    delete(p);  // Deallocating memory
    p = new int[4];
    cout<<*p+2<<endl;
    delete[]p;
    p=NULL;
    return 0;
}