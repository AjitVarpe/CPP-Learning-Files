#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
class Customer{        
  public:     
     string Customer_name;
     string address;
     string	adhar_no; 
     public:   
    void setvalue() {  
      cout << "Enter Customer Name :"<<endl;
      cout << "Enter Address"<<endl;
      cout << "Enter Adhar no :"<<endl;
      cin>>Customer_name;
      cin>>address;
      cin>>adhar_no;
    }
	public:
    void getValue(){
    	cout<<Customer_name<<endl;
    	cout<<address<<endl;
    	cout<<adhar_no<<endl;
    }
};
class Account{	
	public:
	long Account_number;
	int balance;
	string Account_type;
	public:
	void setvalue(){
		cin>>Account_number;
		cin>>balance;
		cin>>Account_type;	
	} public:
	void getValue(){
		cout<<Account_number<<endl;
		cout<<balance<<endl;
		cout<<Account_type<<endl;
	}
};
int main(){
	Account Act;
	Customer cst;
	cst.setvalue();
	Act.setvalue();
	cst.getValue();
	Act.getValue();
  return 0;
}
