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
	
    // Variable declaration 
	int row_start=0,row_end=n-1,col_start=0,col_end=m-1;

    //  looping for printing Variable
    while(row_start<=row_end && col_start<=col_end){

    	// for printing rows of the column
    	for (int col=col_start;col <= col_end;col++){
    		cout<<arr[row_start][col]<<" ";
    	}
    	row_start++;

    	// for printing end of column
    	for(int row=row_start;row<= row_end;row++){
    		cout<<arr[row][col_end]<<" ";
    	}
    	col_end--;

    	// For Printing end row
    	for(int end=col_end;end>=col_start;end--){
    		cout<<arr[row_end][end]<<" ";
    	}
    	row_end--;

    	// for printing start column
    	for(int row = row_end;row>=row_start;row--){
    		cout<<arr[row][col_start]<<" ";
    	}
    	col_start++;
    }
	return 0;
}
