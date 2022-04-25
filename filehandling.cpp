#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{

	ofstream even("even.txt");                       //  Object Creation
	ofstream odd("odd.txt");                       //  Object Creation
	int input; 
	for (int i=0;i<10;i++){                   //when file is created This loop will Start working 
        cout<<"Enter Number"<<endl;      // Input 
		cin>>input;             //getting input
		if (input%2==0)              // loop break condition
		    even << input << endl; 
        else if  (input%2!=0) 
            odd << input << endl;       // inserting input into File
        else 
            continue;;
    }
	even.close();                       // File Closing
	odd.close();                       // File Closing

	ifstream file1("even.txt");                       // Creation of ifstrean object to read file
	// ifstream file2(odd);                       // Creation of ifstrean object to read file
    while (file1 >> input) {
		// getline(file1,input);
		cout << input << endl;
	}
	file1.close();
	// cout<<endl;
    // while (file2 >> input) {
	// 	// getline(file2,input);
	// 	cout << input << endl;
	// }
	// file2.close();
	return 0;
}
