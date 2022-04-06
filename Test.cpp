/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Eden Roas>
 *
 * Date: 2021-04
 */

#include "doctest.h"
#include "Matrix.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;
using namespace zich;

TEST_CASE("Invalid Inputs")
{
    vector<double> matrix = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    SUBCASE("rows & columns can't be negetive")
    {
        CHECK_THROWS(Matrix a(matrix, -1, 3));  // first num negative
        CHECK_THROWS(Matrix a(matrix, 3, -7));  // second number negative
        CHECK_THROWS(Matrix a(matrix, -1, -7)); // both numbers negative
    }
    SUBCASE("Incorrect dimention of rows*cols == vector.size")
    {
        CHECK_THROWS(Matrix a(matrix, 3, 4));
        CHECK_THROWS(Matrix a(matrix, 3, 2));
        CHECK_THROWS(Matrix a(matrix, 5, 6));
    }
}

TEST_CASE("Correct input - correct answers")
{
    SUBCASE("Addition of 2 matrices & bool operators")
    {
        vector<double> matrix = {1, 2, 3, 4, 5, 0, 8, 9, 10};
        vector<double> matrix_add = {2, 4, 6, 8, 10, 0, 16, 18, 20};
        Matrix Mat1(matrix, 3, 3);
        Matrix Mat2(matrix, 3, 3);
        Matrix Mat3(matrix_add, 3, 3);
        CHECK_NOTHROW(Mat1 + Mat2);
        CHECK(Mat1 + Mat2 == Mat3);
        Mat1 += Mat2;
        CHECK(Mat1 == Mat3);
        CHECK(Mat2 != Mat3);

        vector<double> value1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<double> value2 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        vector<double> value3 = {10, 10, 10, 10, 10, 10, 10, 10, 10};
        Mat1 = Matrix(value1, 3, 3);
        Mat2 = Matrix(value1, 3, 3);
        Mat3 = Matrix(value3, 3, 3);
        CHECK(Mat1 + Mat2 == Mat3);
        Mat2 += Mat1;
        CHECK(Mat2 == Mat3);

        vector<double> new1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        vector<double> new2 = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
        vector<double> ans = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        Mat1 = Matrix(new1, 2, 5);
        Mat2 = Matrix(new2, 2, 5);
        Mat3 = Matrix(ans, 2, 5);
        CHECK(Mat1 + Mat2 == Mat3);
        CHECK(Mat2 + Mat1 == Mat3);
        CHECK(Mat1 + Mat1 == Mat3);
        // CHECK(Mat1 + ans == Mat1);
        // CHECK(ans + Mat2 == Mat2);
        Mat2 += Mat1;
        CHECK(Mat2 == Mat3);
        Mat2 = +Mat1;
        CHECK(Mat2 == Mat1);
        CHECK(Mat1++ != Mat2);
        CHECK(Mat2 == Mat3++);
    }

    SUBCASE("Subtraction of 2 matrices & bool operators")
    {
        vector<double> standart_base = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        vector<double> empty = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        Matrix Mat1(standart_base, 3, 3);
        Matrix Mat0(empty, 3, 3);
        CHECK(Mat1 - Mat1 == Mat0);
        CHECK(Mat1 - Mat0 == Mat1);
        CHECK(Mat0 == -Mat0);
        Mat1 -= Mat1;
        CHECK(Mat1 == Mat0);

        vector<double> new1 = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
        vector<double> new2 = {-1, 2, -3, 4, -5, 6, -7, 8, -9, 10};
        Matrix Mat4(new1, 2, 5);
        Matrix Mat5(new2, 2, 5);
        CHECK(-Mat4 == Mat5);
        CHECK(Mat4 - Mat5 == Mat0);
    }
}