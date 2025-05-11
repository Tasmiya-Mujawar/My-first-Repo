//My first project

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // seed RNG
    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "🎯 Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "🎉 Correct! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}