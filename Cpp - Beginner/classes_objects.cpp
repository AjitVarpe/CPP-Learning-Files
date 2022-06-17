#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J K Rowling";
    book1.pages = 500;

    Book book2;
    book1.title = "2 states";
    book1.author = "Chetan Bhagat";
    book1.pages = 350;

    cout << book2.title;
    
}