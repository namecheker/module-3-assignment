/*   6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.   */



#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Constructor
    Person(string n, int a, string c) : name(n), age(a), country(c) {}

    // Setters
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(string c) {
        country = c;
    }

    // Getters
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getCountry() const {
        return country;
    }
};

int main() {
    // Create an instance of Person
    Person person("John", 30, "USA");

    // Display person's information
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    // Update person's information
    person.setName("Alice");
    person.setAge(25);
    person.setCountry("Canada");

    // Display updated information
    cout << "\nUpdated Information:" << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

   
}
