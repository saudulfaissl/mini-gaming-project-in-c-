 #include <iostream>
#include <cstdlib>
#include <ctime>

void guessNumberGame() {
    std::srand(std::time(0));
    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?" << std::endl;

    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
    }

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Please enter a valid number!" << std::endl;
            continue;
        }

        attempts++;

        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > numberToGuess) {
   }
}
