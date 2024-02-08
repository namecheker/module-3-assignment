/*       1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)     */




#include <iostream>
#include <string>

using namespace std;

// Base class
class Cricketer {
protected:
    string name;
    int age;

public:
    // Constructor
    Cricketer(string n, int a) : name(n), age(a) {}

    // Function to input data
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    // Constructor
    Batsman(string n, int a) : Cricketer(n, a) {}

    // Function to input data
    void inputData() {
        Cricketer::inputData(); // Call base class's input function
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    // Function to calculate average runs
    void calculateAverageRuns() {
        averageRuns = totalRuns / 5.0; // Assuming 5 matches played
    }

    // Function to display data
    void displayData() {
        Cricketer::displayData(); // Call base class's display function
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman("Player", 25);
    batsman.inputData();
    cout << "\nBatsman's Information:" << endl;
    batsman.displayData();

    
}
