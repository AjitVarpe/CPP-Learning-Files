#include <bits/stdc++.h>
#include<climits>
using namespace std;
int binarSearch(int arr[],int n,int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			s=mid+1;
			 }
		else{
			e=n;
		}
	}
	return -1;
}
int main(){
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	cout<<binarSearch(arr,n,key);
	
}

