#include<bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long int 
#define lld long long double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,m;
      cin>>n>>m;
      vector<ll>v;
      for(ll i=0;i<m;i++)
      {
        ll k;
        cin>>k;
        v.push_back(k);
      }
      sort(v.begin(),v.end());
      ll lowest=v[0];
      ll greatest=v[m-1];
      ll i=0;
      int arr[n]={0};
      while(i<n)
      {
        ll p=i-lowest;
        ll k=lowest-i;
        ll z=greatest-i;
        ll f=i-greatest;
        arr[i]=max(p,max(k,max(z,f)));
        i++;
      }
      for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
      cout<<endl;
    }
    return 0;
} 
