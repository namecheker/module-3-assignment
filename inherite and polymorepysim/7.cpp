// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance


#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseVar;
public:
    // Constructor with parameter
    Base(int val) {
        baseVar = val;
        cout << "Base class constructor called with value: " << val << endl;
    }
    // Default constructor
    Base() {
        baseVar = 0;
        cout << "Base class default constructor called" << endl;
    }
};

// Intermediate derived class
class Intermediate : public Base {
protected:
    int intermediateVar;
public:
    // Constructor with parameters
    Intermediate(int baseVal, int interVal) : Base(baseVal) {
        intermediateVar = interVal;
        cout << "Intermediate class constructor called with value: " << interVal << endl;
    }
};

// Derived class
class Derived : public Intermediate {
public:
    // Constructor with parameters
    Derived(int baseVal, int interVal, int derivedVal) : Intermediate(baseVal, interVal) {
        cout << "Derived class constructor called with value: " << derivedVal << endl;
    }
};

int main() {
    Derived d(10, 20, 30); // Creating object of derived class
    
  
}

