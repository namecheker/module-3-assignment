/*   8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading  */



#include <iostream>
using namespace std;

// Function to perform addition
int mathOperation(int a, int b) {
    return a + b;
}

// Function to perform addition (overloaded for double)
double mathOperation(double a, double b) {
    return a + b;
}

// Function to perform subtraction
int mathOperation(int a, int b, int c) {
    return a - b - c;
}

// Function to perform multiplication
int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}

// Function to perform division
double mathOperation(double a, double b, double c) {
    return (a / b) / c;
}

int main() {
    // Using int addition
    cout << "Addition (int): " << mathOperation(5, 3) << endl;
    
    // Using double addition
    cout << "Addition (double): " << mathOperation(5.5, 3.6) << endl;
    
    // Using subtraction
    cout << "Subtraction: " << mathOperation(10, 3, 2) << endl;
    
    // Using multiplication
    cout << "Multiplication: " << mathOperation(2, 3, 4, 5) << endl;
    
    // Using division
    cout << "Division: " << mathOperation(20.0, 2.0, 5.0) << endl;
    
   
}

