#include<bits/stdc++.h>
#include<stdio.h>
#include<limits>
using namespace std;
class employee
{

	int id;
	string Name;
	int Salary;

public:

	// Accepting the Employee Info
	void	viewemployee(){
		cout<<id<<endl;
		cout<<Name<<endl;
		cout<<Salary<<endl;
		cout<<endl;
	}

	// Viewing Emploee Details/info 
	void	getemployee(){
		cin>>id;
		cin>>Name;
		cin>>Salary;
	}

	// Selecting Maxing Salary element
	void MaxSalary(int limit){
		if(Salary>limit){
			cout<<"ID     :- "<<id<<endl;
			cout<<"NAME   :- "<<Name<<endl;
			cout<<"SALARY :- "<<Salary<<endl;
			cout<<endl;
		}
	}
};
int main()
{
     
     // Initilisation
    int n;
    cout<<"Enter the Size of employees :-"<<endl;
    cin>>n;

    // Selecting limit For data Display
    int limit;
    cout<<"Select the Bandwidth of Salary :-"<<endl<<endl;
    cin>>limit;

    // Creating object of Class in Array Format
    employee arr[n];					

    // Accepting element of Array
    cout<<"-----: Enter "<<n<<" Employee Details :----------"<<endl;
    for(int i=0;i<n;i++){
    	arr[i].getemployee();
    }

    // Displaying the Element of the Array
    cout<<"-------------: Employee Details :---------------"<<endl<<endl;
    for(int i=0;i<n;i++){
    	arr[i].MaxSalary(limit);
    }


  return 0;
}