#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int cnt = 0;
int main()
{
    string str;
    cout << "enter string :";
    cin >> str;

    // Without using Inbuild fn
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]-=32;
    //         cnt++;
    //     }
    // }

        // To Upper case
    // transform(str.begin(),str.end(),str.begin(), ::toupper);

       // To lower case
    // transform(startpoint of string,endpoint of string ,startpoint, ::tolower);

    cout << str << endl; 
    return 0;
}