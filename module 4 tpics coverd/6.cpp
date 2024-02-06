/* 6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor  */



#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize the member variables
    Employee(const std::string& empName, int empID) : name(empName), employeeID(empID), salary(0.0) {}

    // Member function to calculate and set salary based on performance
    void setSalaryBasedOnPerformance(double performanceScore) {
        // Assume a base salary of 50000 and adjust based on performance
        const double baseSalary = 50000.0;

        if (performanceScore >= 0.8) {
            salary = baseSalary + 0.2 * baseSalary;
        } else if (performanceScore >= 0.6) {
            salary = baseSalary + 0.1 * baseSalary;
        } else {
            salary = baseSalary; // No bonus for lower performance
        }
    }

    // Member function to get the employee's name
    std::string getName() const {
        return name;
    }

    // Member function to get the employee's ID
    int getEmployeeID() const {
        return employeeID;
    }

    // Member function to get the employee's salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    // Create an instance of the Employee class
    Employee emp("John Doe", 123456);

    // Display initial employee information
    std::cout << "Employee Name: " << emp.getName() << std::endl;
    std::cout << "Employee ID: " << emp.getEmployeeID() << std::endl;

    // Set and display salary based on performance
    emp.setSalaryBasedOnPerformance(0.85);
    std::cout << "Employee Salary: $" << emp.getSalary() << std::endl;

    
}
