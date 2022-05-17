#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
	int n,temp=0;
	cin>>n;
	int t=n;
	int arr[n];
	cout<<"Enter Element : ";
		for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for(int i=n;i>0;i--){
	for (int i = 0; i < n; i++)
	{
		if (arr[i]  arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i+1] = temp;
		}
		
	}
	}
	for (int i = 0; i < t; i++)
	{
		cout << arr[i]<<", ";
	}

	return 0;
}