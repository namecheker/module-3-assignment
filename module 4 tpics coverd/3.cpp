/* 3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variabl.  */




#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    // Constructor to initialize the member variables
    Car(const std::string& comp, const std::string& mdl, int yr) : company(comp), model(mdl), year(yr) {}

    // Member function to set the company
    void setCompany(const std::string& comp) {
        company = comp;
    }

    // Member function to set the model
    void setModel(const std::string& mdl) {
        model = mdl;
    }

    // Member function to set the year
    void setYear(int yr) {
        year = yr;
    }

    // Member function to get the company
    std::string getCompany() const {
        return company;
    }

    // Member function to get the model
    std::string getModel() const {
        return model;
    }

    // Member function to get the year
    int getYear() const {
        return year;
    }
};

int main() {
    // Create an instance of the Car class
    Car myCar("Toyota", "Camry", 2022);

    // Display the initial values
    std::cout << "Initial Values:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    // Set new values using member functions
    myCar.setCompany("Honda");
    myCar.setModel("Accord");
    myCar.setYear(2023);

    // Display the updated values
    std::cout << "\nUpdated Values:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    
}
