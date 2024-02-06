#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }

    int subtract(int x, int y) {
        return x - y;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    double divide(int x, int y) {
        if (y != 0) {
            return static_cast<double>(x) / y;
        } else {
            cout << "Cannot divide by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << calculator.add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << calculator.subtract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << calculator.multiply(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << calculator.divide(num1, num2) << endl;

   
}
