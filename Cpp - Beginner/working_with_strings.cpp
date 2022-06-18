#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    string phrasesub;
    cout << phrase.length() << endl; // to know the length of string
    cout << phrase[0] << endl; // to access the desired character of string

    phrase[0] = 'B';
    cout << phrase << endl;

    cout << phrase.find("ffe", 0) << endl; // to find characters from the string
    
    phrasesub = phrase.substr(8, 3); // to collect a substring of a string
    cout << phrasesub << endl;

}