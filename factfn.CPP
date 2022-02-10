#include<bits/stdc++.h>
using namespace std;
int factfn(int n){
	int fact=1;
	for(int i=2;i<=n;i++){
		fact *= i;
	
	}
	return fact;
}
int main(){
	int a;
	cin>>a;
	cout<<factfn(a)<<endl;
	
}
