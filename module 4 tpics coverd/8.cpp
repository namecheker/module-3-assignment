/*  8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation   */



#include <iostream>
#include <string>

using namespace std;

// Forward declaration of Address class
class Address;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    char grade;

public:
    // Constructor
    Student(string n, string cls, int roll, float m) : name(n), studentClass(cls), rollNumber(roll), marks(m) {
        calculateGrade();
    }

    // Function to calculate grade based on marks
    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else if (marks >= 50)
            grade = 'E';
        else
            grade = 'F';
    }

    // Function to display student information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for address (using aggregation)
    void setAddress(const Address& addr);
};

// Address class
class Address {
private:
    string street;
    string city;
    string state;
    string country;

public:
    // Constructor
    Address(string s, string c, string st, string co) : street(s), city(c), state(st), country(co) {}

    // Function to display address information
    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << country << endl;
    }
    
    // Friend function to access private members of Student class
    friend void Student::setAddress(const Address& addr);
};

// Setter for address
void Student::setAddress(const Address& addr) {
    addr.displayAddress();
}

int main() {
    // Create Address object
    Address address("123 Main St", "Anytown", "CA", "USA");

    // Create Student object
    Student student("Alice", "12th", 101, 85.5);

    // Display student information
    student.displayInfo();

    // Set student's address
    student.setAddress(address);

    
}
