//    13.Write a program to find the max number from given two numbers using friend function





#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;

public:
    MaxFinder(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Friend function to find the maximum number
    friend int findMax(MaxFinder &mf);
};

// Definition of the friend function to find the maximum number
int findMax(MaxFinder &mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxFinder mf(num1, num2);

    cout << "The maximum number is: " << findMax(mf) << endl;

   
}
