#include "Matrix.hpp"
using namespace std;
namespace zich
{
    // constructor and destructor
    Matrix::Matrix(vector<double> nums, int rows, int columns)
    {
        this->data = nums;
        this->rows = rows;
        this->cols = columns;
    }

    vector<double> mat = {0, 0, 0, 0};
    Matrix mat_ans(mat, 2, 2);

    double Matrix::sum() const
    {
        return 0;
    }

    double Matrix::mul(const int row, const int col, const Matrix &value)
    {
        return 0;
    }
    Matrix::~Matrix() {}
    //Addition
    Matrix operator+(const Matrix &mat_a, const Matrix &mat_b)
    {
        return mat_ans;
    }

    Matrix operator+=(const Matrix &mat_a, const Matrix &mat_b)
    {
        return mat_ans;
    }
    //deep copy
    Matrix operator+(const Matrix &mat_a)
    {
        return mat_ans;
    }
    //Subtraction
    Matrix operator-(const Matrix &mat_a, const Matrix &mat_b)
    {
        return mat_ans;
    }

    Matrix operator-=(const Matrix &mat_a, const Matrix &mat_b)
    {
        return mat_ans;
    }
    // deep copy + *(-1)
    Matrix operator-(const Matrix &mat_a)
    {
        return mat_ans;
    }
    // comparison operators (<, >, <=, >=, ==, !=)
    bool operator>(const Matrix &mat_a, const Matrix &mat_b)
    {
        return true;
    }

    bool operator<(const Matrix &mat_a, const Matrix &mat_b)
    {
        return true;
    }

    bool operator==(const Matrix &mat_a, const Matrix &mat_b)
    {
        return true;
    }

    bool operator!=(const Matrix &mat_a, const Matrix &mat_b)
    {
        return true;
    }

    bool operator>=(const Matrix &mat_a, const Matrix &mat_b)
    {
        return true;
    }

    bool operator<=(const Matrix &mat_a, const Matrix &mat_b)
    {
        return true;
    }
    // Increment and decrement operators
    Matrix operator++(const Matrix &mat_a) //mat_a++
    { 
        return mat_ans;
    }

    Matrix operator--(const Matrix &mat_a) //mat_a--
    { 
        return mat_ans;
    }

    Matrix &operator++(const Matrix &mat_a, const int mat_b) // ans = mat_a + mat_b;
    { 
        return mat_ans;
    }

    Matrix &operator--(const Matrix &mat_a, const int mat_b) //ans = mat_a - mat_b;
    { 
        return mat_ans;
    }

    Matrix operator*(const Matrix &mat_a, const double scalar) //ans = mat_a * scalar
    {
        return mat_ans;
    }

    Matrix operator*(const double scalar, const Matrix &mat_a) // ans = scalar * mat_a
    {
        return mat_ans;
    }

    Matrix operator*(const Matrix &mat_a, const Matrix &mat_b) // ans = mat_a * mat_b
    {
        return mat_ans;
    }

    Matrix operator*=(const Matrix &mat_a, const double scalar)
    {
        return mat_ans;
    }

    Matrix operator*=(const Matrix &mat_a, const Matrix &mat_b)
    {
        return mat_ans;
    }
    // Input & Output
    ostream &operator<<(ostream &os, const Matrix &mat_a)
    {
        return os;
    }

    istream &operator>>(istream &is, Matrix &mat_a)
    {
        return is;
    }
}