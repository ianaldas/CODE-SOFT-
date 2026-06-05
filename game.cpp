#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation

    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number: "
                 << randomNumber << endl;
        }

    } while (guess != randomNumber);

    return 0;
}