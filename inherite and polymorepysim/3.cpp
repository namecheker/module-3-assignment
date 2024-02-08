/*   3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)   */



#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
public:
    // Default constructor
    Person() : name(""), age(0) {}

    // Parameterized constructor
    Person(string name, int age) : name(name), age(age) {}

    // Function to read data
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to write data
    void writeData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    float percentage;
public:
    // Default constructor
    Student() : Person(), percentage(0.0) {}

    // Parameterized constructor
    Student(string name, int age, float percentage) : Person(name, age), percentage(percentage) {}

    // Function to read data
    void readData() {
        Person::readData(); // Call base class readData function
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    // Function to write data
    void writeData() {
        Person::writeData(); // Call base class writeData function
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    float salary;
public:
    // Default constructor
    Teacher() : Person(), salary(0.0) {}

    // Parameterized constructor
    Teacher(string name, int age, float salary) : Person(name, age), salary(salary) {}

    // Function to read data
    void readData() {
        Person::readData(); // Call base class readData function
        cout << "Enter salary: $";
        cin >> salary;
    }

    // Function to write data
    void writeData() {
        Person::writeData(); // Call base class writeData function
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student details:\n";
    student.readData();

    cout << "\nEnter teacher details:\n";
    teacher.readData();

    cout << "\nStudent details:\n";
    student.writeData();

    cout << "\nTeacher details:\n";
    teacher.writeData();

   
}
