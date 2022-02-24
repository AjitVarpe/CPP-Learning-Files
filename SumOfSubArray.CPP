#include<bits/stdc++.h>
#include<stdio.h>
#include<limits>
using namespace std;
int main(){
	int n,add=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			add+=arr[j];
		}
	}
	cout<<add;
  return 0;

}
