//    4. Write a C++ Program display Student Mark sheet using Multiple inheritance


#include <iostream>
#include <string>

using namespace std;

// Base class for student personal details
class PersonalDetails {
protected:
    string name;
    int rollNumber;
public:
    // Default constructor
    PersonalDetails() : name(""), rollNumber(0) {}

    // Parameterized constructor
    PersonalDetails(string name, int rollNumber) : name(name), rollNumber(rollNumber) {}

    // Function to read personal details
    void readPersonalDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    // Function to display personal details
    void displayPersonalDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Base class for student academic details
class AcademicDetails {
protected:
    float marks[5]; // Assuming 5 subjects
public:
    // Function to read marks for each subject
    void readMarks() {
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
    }

    // Function to display marks for each subject
    void displayMarks() {
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class Student combining personal and academic details
class Student : public PersonalDetails, public AcademicDetails {
public:
    // Default constructor
    Student() : PersonalDetails(), AcademicDetails() {}

    // Parameterized constructor
    Student(string name, int rollNumber, float marks[]) : PersonalDetails(name, rollNumber) {
        for (int i = 0; i < 5; ++i) {
            this->marks[i] = marks[i];
        }
    }

    // Function to display student mark sheet
    void displayMarkSheet() {
        displayPersonalDetails();
        displayMarks();
    }
};

int main() {
    Student student;
    
    cout << "Enter student details:\n";
    student.readPersonalDetails();
    student.readMarks();
    
    cout << "\nStudent Mark Sheet:\n";
    student.displayMarkSheet();
    
    
}
