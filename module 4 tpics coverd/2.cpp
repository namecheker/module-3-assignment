// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    // Constructor to initialize the numbers
    Calculator(double n1, double n2) : num1(n1), num2(n2) {}

    // Function to perform addition
    double add() {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() {
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply() {
        return num1 * num2;
    }

    // Function to perform division (checks for division by zero)
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0.0; // Return a default value in case of division by zero
        }
    }
};

int main() {
    double number1, number2;

    // Input first number
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    // Input second number
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Create an instance of the Calculator class with the provided numbers
    Calculator calculatorObj(number1, number2);

    // Display the results of various operations
    std::cout << "Addition Result: " << calculatorObj.add() << std::endl;
    std::cout << "Subtraction Result: " << calculatorObj.subtract() << std::endl;
    std::cout << "Multiplication Result: " << calculatorObj.multiply() << std::endl;
    std::cout << "Division Result: " << calculatorObj.divide() << std::endl;

    
}
