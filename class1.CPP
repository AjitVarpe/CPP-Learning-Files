#include<bits/stdc++.h>
using namespace std;
int main(){
	int num1,num2,arr[10],sum=0;
	cin>>num1;
	scanf("%d",&num2);
	int total=num1+num2;
	cout<<total<<endl;
	if(total%2==0){
		cout<<"Even"<<endl;
		for (int i=0;i<10;i++){
			arr[i]=i+1;
		}
		for(int i=0;i<10;i++){
			sum+=arr[i];
		}
		cout<<sum<<endl;
	}else{
	cout<<"Odd"<<endl;
		for (int i=-1;i>=-10;i--){
			for(int j=1;j<=10;j++){
				if(i+j==0)
				arr[j-1]=i;
			}
		}
		for(int i=0;i<10;i++){
			sum+=arr[i];
		}	
		cout<<sum<<endl;
	}	
	cout<<"size of functions output"<<endl;
	cout<<sizeof(sum);
}
