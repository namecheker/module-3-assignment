//9. Write a Program of Two 1D Matrix Addition using Operator Overloading




#include <iostream>
using namespace std;

// Class for 1D Matrix
class Matrix {
private:
    int size;
    int* data;
public:
    // Constructor
    Matrix(int s) {
        size = s;
        data = new int[size];
    }
    
    // Destructor
    ~Matrix() {
        delete[] data;
    }
    
    // Overloading + operator for matrix addition
    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = this->data[i] + other.data[i];
        }
        return result;
    }
    
    // Function to set values of matrix
    void setValues(int* arr) {
        for (int i = 0; i < size; ++i) {
            data[i] = arr[i];
        }
    }
    
    // Function to display matrix
    void display() {
        cout << "Matrix: ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Size of matrices
    const int size = 5;
    
    // Create two matrices
    Matrix matrix1(size);
    Matrix matrix2(size);
    
    // Set values for matrices
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {5, 4, 3, 2, 1};
    matrix1.setValues(arr1);
    matrix2.setValues(arr2);
    
    // Display matrices
    cout << "Matrix 1:" << endl;
    matrix1.display();
    cout << "Matrix 2:" << endl;
    matrix2.display();
    
    // Perform matrix addition
    Matrix result = matrix1 + matrix2;
    
    // Display result
    cout << "Resultant Matrix:" << endl;
    result.display();
    
    
}
