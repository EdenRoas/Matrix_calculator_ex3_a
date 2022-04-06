#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

namespace zich
{
    class Matrix
    {
    private:
        vector<double> data;
        int rows;
        int cols;
        double sum() const;
        double mul(const int row, const int col, const Matrix &value);

    public:
        // constructor and destructor
        Matrix(vector<double> nums, int rows, int columns);
        ~Matrix();
        // Addition
        friend Matrix operator+(const Matrix &mat_a, const Matrix &mat_b);
        friend Matrix operator+=(const Matrix &mat_a, const Matrix &mat_b);
        friend Matrix operator+(const Matrix &mat_a);
        // Subtraction
        friend Matrix operator-(const Matrix &mat_a, const Matrix &mat_b);
        friend Matrix operator-=(const Matrix &mat_a, const Matrix &mat_b);
        friend Matrix operator-(const Matrix &mat_a);
         // comparison operators (<, >, <=, >=, ==, !=)
        friend bool operator>(const Matrix &mat_a, const Matrix &mat_b);
        friend bool operator<(const Matrix &mat_a, const Matrix &mat_b);
        friend bool operator==(const Matrix &mat_a, const Matrix &mat_b);
        friend bool operator!=(const Matrix &mat_a, const Matrix &mat_b);
        friend bool operator>=(const Matrix &mat_a, const Matrix &mat_b);
        friend bool operator<=(const Matrix &mat_a, const Matrix &mat_b);
        // Increment and decrement operators
        friend Matrix operator++(const Matrix &mat_a); 
        friend Matrix operator--(const Matrix &mat_a); 

        friend Matrix &operator++(const Matrix &mat_a, const int scalar); 
        friend Matrix &operator--(const Matrix &mat_a, const int scalar); 
        // Multiplication
        friend Matrix operator*(const Matrix &mat_a, const double scalar);
        friend Matrix operator*(const double scalar, const Matrix &mat_a);
        friend Matrix operator*(const Matrix &mat_a, const Matrix &mat_b);

        friend Matrix operator*=(const Matrix &mat_a, const double scalar);
        friend Matrix operator*=(const Matrix &mat_a, const Matrix &mat_b);
        // Input and output
        friend ostream &operator<<(ostream &os, const Matrix &mat_a);
        friend istream &operator>>(istream &os, Matrix &mat_a);
    };

};