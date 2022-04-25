#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{

	ofstream file;
	string input;
	file.open("number.txt");
	while (file) {
        cout<<"Enter Text "<<endl;
		getline(cin,input);
		if (input == "-1")
			break;
		file << input << endl;
	}

	file.close();
	ifstream fin;
	fin.open("number.txt");
	while (fin) {

		getline(fin,input);

		cout << input << endl;
	}

	fin.close();
	return 0;
}