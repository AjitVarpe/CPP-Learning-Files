#include <bits/stdc++.h>
using namespace std;
int main(){


			int n,m;   // initilisation 
			cin>>n>>m;
	
			int arr[n][m];   // Array declaration 

			// Accpeting values of 2D array 
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cin>>arr[i][j];
				}
			}

			// Trasposing current array 
		for(int i=0;i<n;i++){
			for (int j=i;j<m;j++){
				if(i != j){
					int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
				}
			}
		}

		// Displaying current Array Item
		// Accpeting values of 2D array 
			for (int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<arr[i][j]<<" ";
				}
				cout<<"\n";
			}


	return 0;
}
