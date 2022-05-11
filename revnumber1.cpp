#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int n,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<"Reverse is "<<rev;


    return 0;
}