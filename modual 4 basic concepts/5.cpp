/*    5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.   */


#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Create Rectangle object
    Rectangle rectangle(length, width);

    // Calculate and display area
    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    // Calculate and display perimeter
    std::cout << "Perimeter of the rectangle: " << rectangle.calculatePerimeter() << std::endl;

   
}
