#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    string str="123454321";

    // to sort from high to low 
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;

    // To Sort from low to high in order.
    sort(str.begin(),str.end());
    
    cout<<str<<endl;


    return 0;
}