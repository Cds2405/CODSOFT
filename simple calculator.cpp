#include <iostream>

int main() {
    double num1, num2;
    char operation;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Select an operation (+, -, *, /): ";
    std::cin >> operation;
     double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Division by zero is not allowed." << std::endl;
                return 1; 
            }
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
