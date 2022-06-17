#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(){
            title = "No title";
            author = "No author";
            pages = 0;        
        }

        Book(string a_title, string a_author, int a_pages){
            title = a_title;
            author = a_author;
            pages = a_pages;
        }   
};

int main() {

    Book book1("Harry Potter", "J K Rowling", 500);
    Book book2("2 states", "Chetan Bhagat", 350);
    Book book3;

    
    cout << book1.title << endl;
    cout << book2.title << endl;
    cout << book3.title << endl;
}