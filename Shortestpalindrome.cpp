#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
                             


bool check_pallindrome(string s1){
  string r=s1;
  reverse(r.begin(),r.end());

  if(r==s1)
    return true;
  else
    return false;
}

int main(){
 
     // freopen("i.txt","r",stdin);
     // freopen("o.txt","w",stdout);
  IOS

  string s;
  cin>>s;

  string r=s;
  reverse(r.begin(),r.end());
  if(r==s)
    cout<<"Yes Pallindrome"<<"\n";
  else{
    int m;
    int n=(int)s.size();
    for(int i=1;i<n;i++){
      if(check_pallindrome(s.substr(i,n-1))||i==n-1){
        m=i;
        break;
      }  
      }
      for(int j=m-1;j>=0;j-- )
       s+=s[j];
     cout<<s<<"\n";
    }
 
 }