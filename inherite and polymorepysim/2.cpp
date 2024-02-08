//   2. Write a C++ Program to find Area of Rectangle using inheritance


#include <iostream>

using namespace std;

// Base class
class Shape {
protected:
    float length;
    float width;

public:
    // Constructor
    Shape(float l, float w) : length(l), width(w) {}

    // Virtual function to calculate area
    virtual float calculateArea() = 0; // Pure virtual function
};

// Derived class
class Rectangle : public Shape {
public:
    // Constructor
    Rectangle(float l, float w) : Shape(l, w) {}

    // Function to calculate area
    float calculateArea() override {
        return length * width;
    }
};

int main() {
    float length, width;

    // Input dimensions
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Create Rectangle object
    Rectangle rectangle(length, width);

    // Calculate and display area
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

   
}
