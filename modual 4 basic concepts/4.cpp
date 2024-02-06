/*   4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.    */



#include <iostream>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate area
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Member function to calculate circumference
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Create Circle object
    Circle circle(radius);

    // Calculate and display area
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;

    // Calculate and display circumference
    std::cout << "Circumference of the circle: " << circle.calculateCircumference() << std::endl;

    
}
