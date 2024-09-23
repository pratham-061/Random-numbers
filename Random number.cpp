#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    int randomNumber = std::rand() % 10 + 1;
    int guess;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 10." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }
    } while (guess != randomNumber);

    std::cout << "Congratulations! You've guessed the correct number!" << std::endl;
    return 0;
}
