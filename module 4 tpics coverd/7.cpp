// 7. Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.



#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Setters
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Getters
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return day <= daysInMonth[month - 1];
    }

private:
    // Function to check if a year is a leap year
    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    // Create a Date object
    Date date(29, 2, 2024);

    // Display date information
    cout << "Day: " << date.getDay() << endl;
    cout << "Month: " << date.getMonth() << endl;
    cout << "Year: " << date.getYear() << endl;

    // Check if the date is valid
    if (date.isValidDate()) {
        cout << "Date is valid." << endl;
    } else {
        cout << "Date is not valid." << endl;
    }

    
}

