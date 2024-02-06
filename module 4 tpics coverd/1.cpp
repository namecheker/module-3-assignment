// 1. Write a program to find the multiplication values and the cubic values using inline function


#include <iostream>

// Inline function to calculate multiplication
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate cubic values
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    // Input first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Input second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and display multiplication value
    int multiplicationResult = multiply(num1, num2);
    std::cout << "Multiplication Result: " << multiplicationResult << std::endl;

    // Calculate and display cubic value for the first number
    int cubicValueNum1 = cube(num1);
    std::cout << "Cubic Value of the first number: " << cubicValueNum1 << std::endl;

    // Calculate and display cubic value for the second number
    int cubicValueNum2 = cube(num2);
    std::cout << "Cubic Value of the second number: " << cubicValueNum2 << std::endl;

   
}
