#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;
int fact(int x){
    if(x==1 || x < 0){
        return 1;
    }else
    {
        return x * fact(x-1);
    }
}
int main(){
    int n;
    cout<<"Enter the Number to Get Factorial "<<endl;
    cin>>n;
    cout<<"The Factorial Of Number is "<<fact(n);


    return 0;
}