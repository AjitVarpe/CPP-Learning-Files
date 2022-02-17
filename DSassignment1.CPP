int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
// 2.	Deletion
// Code :-
int main(){
	
	int n;
	cin>>n;
	int arr[n];
	int del;
	cin>>del;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		if(arr[i]==del){
			for(int j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
		}
	}
	n--;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
// 3.	Searching
// Code :-
int main(){
	
	int n;
	cin>>n;
	int arr[n];
	int search;
	cin>>search;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]==search){
			cout<<i;
		}
	}
// 4.	traversing
// Code :-
int main(){
	
	int n;
	cin>>n;
	int arr[n];
	int search;
	cin>>search;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}				
}
