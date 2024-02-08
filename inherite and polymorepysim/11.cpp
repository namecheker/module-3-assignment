/*    11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area   */



#include <iostream>
#include <cmath>

using namespace std;

class AreaCalculator {
public:
    // Function Overloading for Rectangle
    float calculateArea(float length, float breadth) {
        return length * breadth;
    }

    // Function Overloading for Triangle
    float calculateArea(float base, float height, char shape) {
        if (shape == 'T') {
            return 0.5 * base * height;
        }
        return 0; // return 0 if the shape is not recognized
    }

    // Function Overloading for Circle
    float calculateArea(float radius, char shape) {
        if (shape == 'C') {
            return M_PI * radius * radius;
        }
        return 0; // return 0 if the shape is not recognized
    }
};

int main() {
    AreaCalculator calculator;

    // Rectangle
    float length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << calculator.calculateArea(length, breadth) << endl;

    // Triangle
    float base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculator.calculateArea(base, height, 'T') << endl;

    // Circle
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculator.calculateArea(radius, 'C') << endl;

    
}
