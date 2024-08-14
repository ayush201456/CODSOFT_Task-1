// Task 1. Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.




#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int Number = rand() % 100 + 1;
    int userguess = 0;

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;
    for (int i = 0; i < 100; ++i) {
        cout << "Enter your guess: ";
        cin >> userguess;

        if (userguess < Number) {
            cout << "Too Low! Try Again." << endl;
        } else if (userguess > Number) {
            cout << "Too High! Try Again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly." << endl;
            break;
        }
    }

    return 0;
}
