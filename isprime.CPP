#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	for(int i=2;i<n;i++){
		return false;
	}
	return true;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		while(isprime(i)){
			cout<<i<<endl;
		}
	}
}
