#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String :";
    getline(cin,s); 
    // getline will take the the all line ofinput from user " Ajit Varpe" including space  
    
    // cin>>s; // Cin will take only upto Frist Space for ex: Ajit Varpe is the input then it will only take Ajit As a input


    cout<<"Your Enterd string is :"<<endl;
    

    s.push_back('k');
    cout<<"After using push back String is like :- "<<s;

    cout<<endl;
    s.pop_back();
    cout<<"After using string pop back function :- "<<s;
    // cout<<s;



    return 0;
}