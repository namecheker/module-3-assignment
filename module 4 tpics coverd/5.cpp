/* 5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene  */



#include <iostream>

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize the member variables
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Member function to check if the triangle is equilateral
    bool isEquilateral() const {
        return (side1 == side2) && (side2 == side3);
    }

    // Member function to check if the triangle is isosceles
    bool isIsosceles() const {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }

    // Member function to check if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }
};

int main() {
    // Create an instance of the Triangle class
    Triangle myTriangle(3.0, 4.0, 5.0);

    // Check and display the type of the triangle
    if (myTriangle.isEquilateral()) {
        std::cout << "The triangle is equilateral." << std::endl;
    } else if (myTriangle.isIsosceles()) {
        std::cout << "The triangle is isosceles." << std::endl;
    } else if (myTriangle.isScalene()) {
        std::cout << "The triangle is scalene." << std::endl;
    } else {
        std::cout << "Invalid triangle." << std::endl;
    }

}
