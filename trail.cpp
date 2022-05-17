#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
	int n, temp = 0;
	cin >> n;
	int t = n;
	int arr[n];
	cout << "Enter Element : ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		cout << arr[i] << ", ";
	}

	return 0;
}