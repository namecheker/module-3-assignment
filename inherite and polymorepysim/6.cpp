// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance


#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;
    
    // Constructor
    Base() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }
    
    // Function to display values
    void display() {
        cout << "Private Variable (Base): " << privateVar << endl;
        cout << "Protected Variable (Base): " << protectedVar << endl;
        cout << "Public Variable (Base): " << publicVar << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Function to display values
    void displayDerived() {
        // Can't access privateVar directly
        // cout << "Private Variable (Derived): " << privateVar << endl;
        
        // Accessing protectedVar and publicVar
        cout << "Protected Variable (Derived): " << protectedVar << endl;
        cout << "Public Variable (Derived): " << publicVar << endl;
    }
};

int main() {
    Derived d;
    
    // Can't access privateVar directly
    // cout << "Private Variable (Main): " << d.privateVar << endl;
    
    // Accessing protectedVar and publicVar through derived class object
    cout << "Protected Variable (Main): " << d.protectedVar << endl;
    cout << "Public Variable (Main): " << d.publicVar << endl;
    
    // Accessing display functions
    cout << "\nDisplaying values from derived class:" << endl;
    d.displayDerived();
    cout << "\nDisplaying values from base class:" << endl;
    d.display();
    
    
}
