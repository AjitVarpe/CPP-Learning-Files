#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int n,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;

    // Logic 1
    // while(n!=0){
    //     rev=rev*10+n%10;
    //     n=n/10;
    // }

    Logic 2
    string num = to_string(n);
    reverse(num.begin(), num.end());
    cout<<"Reverse is "<<num;



    return 0;
}