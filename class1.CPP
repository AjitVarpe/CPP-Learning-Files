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
		for (int i=1;i<=10;i++){
			for(int j=i;j<=i;j++){
				arr[j]=i;
			}
		}
		for(int i=1;i<=10;i++){
			sum+=arr[i];
		}
		cout<<sum<<endl;
	}else{
	cout<<"Odd"<<endl;
		for (int i=-1;i>=-10;i--){
			for(int j=i;j<=i;j++){
				arr[j]=i;
			}
		}
		for(int i=1;i<=10;i++){
			sum+=arr[i];
		}	
		cout<<sum<<endl;
	}	
	cout<<sizeof(sum);
}


