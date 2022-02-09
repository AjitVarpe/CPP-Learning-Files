#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	bool flag=0;
	cin>>num;
	for (int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			flag=1;
			cout<<"Non prime number ";
			break;
		}
	}
	if(flag==0){
		cout<<"Number is prime "<<std::endl;
	}



	return 0;
}
