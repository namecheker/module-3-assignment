//    12.Write a program to swap the two numbers using friend function without using third variable



#include <iostream>
using namespace std;

class NumberSwapper {
private:
    int num1, num2;

public:
    NumberSwapper(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Friend function to swap numbers
    friend void swapNumbers(NumberSwapper &ns);

    void displayNumbers() {
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

// Definition of the friend function to swap numbers
void swapNumbers(NumberSwapper &ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    NumberSwapper ns(num1, num2);

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(ns);

    ns.displayNumbers();

    
}
