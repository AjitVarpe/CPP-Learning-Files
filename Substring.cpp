#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

std::string substring(const std::string atr,int a,int b)
{
    {
    int t=0;
    string newstr;
        for(int i=a;i<=b;i++){
        newstr[t]=atr[i];
        t++;
        }    
    return newstr;
}
}

int main()
{
    int s,e;

    std::string str; 
    cout<<"Enter String :"<<endl;
    getline(std::cin,str);
    cout<<"Enter the Start and end point of string"<<endl;
    cin>>s>>e;
    message = substring(str,s,e);
    std::cout << message << '\n';
}