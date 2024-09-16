#include <iostream>
#include <cstdlib> // rand() and srand() function
#include <ctime>   // time function
using namespace std;

int main() {
    
    // code for random number generator
    srand(static_cast<unsigned int>(time(0)));

    // code to generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int guessNumber;  // stores the user's guess

    cout << "Please guess a number (between 1 and 100): " << endl;

    // While loop to keep asking the user until they guess correctly
    while (true) {
        cin >> guessNumber;  // inputs the user's guess

        if (guessNumber == randomNumber) {
            cout << "You guessed correctly! That is the secret number!" << endl;
            break;  // Exit the loop when the correct guess is entered
        }
        else {
            cout << "You guessed wrong! Try again!" << endl;
        }
    }

    return 0;
}
