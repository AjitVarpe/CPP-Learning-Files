#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    int max=0;
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]- 'a']++;
        
        
    }
      
    


    return 0;
}