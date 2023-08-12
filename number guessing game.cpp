#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
 {
 
    int secretNumber = std::rand() % 100 + 1;
    
    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    
    while (true) {
        int guess;
        
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        
        if (std::cin.fail()) {
            std::cout << "Please enter a valid number." << std::endl;
            std::cin.clear();
          
            continue;
        }
        
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number: " << secretNumber << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }
    
    return 0;
}
