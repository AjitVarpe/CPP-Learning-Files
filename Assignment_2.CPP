#include<bits/stdc++.h>
#include<stdio.h>
#include<limits>
using namespace std;

//  Crerating Function for Returning the Index Of Required Element
int binary(int arr[],int n,int key)
{
	int s=0,e=n;
	while(s<=e){
			int mid =(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}else if(arr[mid]>key){
			e=mid-1;
		}else{
			s=mid+1;
		}
	}	
	return -1;
}
int main(){

	// Accepting Size of Array and Search key
	int n,key;
	cin>>n;
	cin>>key;


	// Inserting Array Element 
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	// Filling Values in the Function
	cout<<binary(arr,n,key);
  return 0;
}
