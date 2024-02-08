/*   5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)    */



#include <iostream>
using namespace std;

// Class to store roll number of students
class Students {
protected:
    int rollNumber;
public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
    int getRollNumber() {
        return rollNumber;
    }
};

// Class to store marks obtained in two subjects
class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;
public:
    void setMarks(int marks1, int marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
    void displayMarks() {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

// Class to store total marks obtained in the test
class Result : public Test {
public:
    int totalMarks() {
        return subject1Marks + subject2Marks;
    }
    void displayResult() {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayMarks();
        cout << "Total Marks: " << totalMarks() << endl;
    }
};

int main() {
    Result studentResult;
    
    // Set roll number
    studentResult.setRollNumber(101);
    
    // Set marks for two subjects
    studentResult.setMarks(85, 90);
    
    // Display result
    studentResult.displayResult();
    
    
}

