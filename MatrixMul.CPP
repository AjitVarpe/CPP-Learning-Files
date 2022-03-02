#include <bits/stdc++.h>
using namespace std;
int main(){


			// initilisation
			int n1,n2,n3;    
			cin>>n1>>n2>>n3;
	
			// Array declarations 
			int m1[n1][n2];
			int m2[n2][n3];
			int ans[n1][n3];		 

			// Accpeting values of M1 Array
			for (int i=0;i<n1;i++){
				for(int j=0;j<n2;j++){
					cin>>m1[i][j];
				}
			}

			// Accpeting values of M1 Array
			for (int i=0;i<n2;i++){
				for(int j=0;j<n3;j++){
					cin>>m2[i][j];
				}
			}

			// Matrix Multiplication
			for (int i=0;i<n1;i++){
				for(int j=0;j<n3;j++){
					for(int k=0;k<n2;k++){
						ans[i][j]=m1[i][k] * m2[k][j];
					}
				}
			} 


			// Displaying current Array Item
			for (int i=0;i<n1;i++){
				for(int j=0;j<n3;j++)
					cout<<ans[i][j]<<" ";
					cout<<"\n";
			}


	return 0;
}
