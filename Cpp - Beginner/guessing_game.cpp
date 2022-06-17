#include <iostream>

using namespace std;

int main(){

    // guessing game 
    int secret_num = 7;
    int guess;
    int guess_count = 0;
    int guess_limit = 3;
    bool out_of_guesses = false;

    cout << "Welcome to Guessing Game" << endl;
    cout << "You've 3 chances to guess a number" << endl;

    while(secret_num != guess && !out_of_guesses){
        if(guess_count < guess_limit){
            cout << "Enter your guess: ";
            cin >> guess;
            guess_count++;
        } else{
            out_of_guesses = true;
        }
    }
    if(out_of_guesses){
        cout << "You lose";
    } else {
        cout << "You Win";
    }
}