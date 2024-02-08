// 10.Write a program to concatenate the two strings using Operator Overloading.



#include <iostream>
#include <cstring>
using namespace std;

// Class for String Concatenation
class MyString {
private:
    char* str;
public:
    // Constructor
    MyString(const char* s = nullptr) {
        if (s == nullptr) {
            str = nullptr;
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }
    
    // Destructor
    ~MyString() {
        delete[] str;
    }
    
    // Overloading + operator for string concatenation
    MyString operator+(const MyString& other) {
        char* resultStr = new char[strlen(this->str) + strlen(other.str) + 1];
        strcpy(resultStr, this->str);
        strcat(resultStr, other.str);
        MyString result(resultStr);
        delete[] resultStr;
        return result;
    }
    
    // Function to display string
    void display() {
        cout << "String: " << str << endl;
    }
};

int main() {
    // Create two strings
    MyString str1("Hello, ");
    MyString str2("world!");
    
    // Display original strings
    cout << "String 1:" << endl;
    str1.display();
    cout << "String 2:" << endl;
    str2.display();
    
    // Concatenate strings
    MyString result = str1 + str2;
    
    // Display concatenated string
    cout << "Concatenated String:" << endl;
    result.display();
    
   
}


