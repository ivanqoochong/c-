#ifndef Matrix_h
#define Matrix_h

#include <iostream>
#include <assert.h>     /* assert */
using namespace std;

template<typename T>
class Matrix {
private:
    int rows_, cols_;
    T** p; // a 2D array
    void allocSpace();
public:
    Matrix(int, int);
    Matrix();
    ~Matrix();
    Matrix(const Matrix<T>&);
    Matrix<T>& operator=(const Matrix<T>&);
    Matrix<T>& operator+=(const Matrix<T>&);
    Matrix<T>& operator-=(const Matrix<T>&);
    Matrix<T>& operator*=(const Matrix<T>&);

    friend ostream& operator<<(ostream& os, const Matrix<T>& m)
    {
        for (int i = 0; i < m.rows_; ++i) {
            os << m.p[i][0];
            for (int j = 1; j < m.cols_; ++j) {
                os << "\t" << m.p[i][j];
            }
            os << endl;
        }
        return os;
    }

    friend istream& operator>>(istream& is, Matrix& m)
    {
        for (int i = 0; i < m.rows_; ++i) {
            for (int j = 0; j < m.cols_; ++j) {
                is >> m.p[i][j];
            }
        }
        return is;
    }
};

// Implementation starts here
template <typename T>
void Matrix<T>::allocSpace()
{
    p = new T*[rows_];
    for (int i = 0; i < rows_; ++i) {
        p[i] = new T[cols_];
    }
}

template<typename T>
Matrix<T>::Matrix(int rows, int cols) : rows_(rows), cols_(cols)
{
    allocSpace();
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            p[i][j] = 0;
        }
    }
}

template<typename T>
Matrix<T>::Matrix() : rows_(1), cols_(1)
{
    allocSpace();
    p[0][0] = 0;
}

template<typename T>
Matrix<T>::~Matrix()
{
    for (int i = 0; i < rows_; ++i) {
        delete[] p[i];
    }
    delete[] p;
}

template<typename T>
Matrix<T>::Matrix(const Matrix<T>& m) : rows_(m.rows_), cols_(m.cols_)
{
    allocSpace();
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            p[i][j] = m.p[i][j];
        }
    }
}

template<typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& m)
{
    if (this == &m) {
        return *this;
    }

    if (rows_ != m.rows_ || cols_ != m.cols_) {
        for (int i = 0; i < rows_; ++i) {
            delete[] p[i];
        }
        delete[] p;

        rows_ = m.rows_;
        cols_ = m.cols_;
        allocSpace();
    }

    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            p[i][j] = m.p[i][j];
        }
    }
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator+=(const Matrix<T>& m)
{
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            p[i][j] += m.p[i][j];
        }
    }
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator-=(const Matrix<T>& m)
{
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            p[i][j] -= m.p[i][j];
        }
    }
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator*=(const Matrix<T>& m)
{
    assert(cols_ == m.rows_);   // matrix multiplication a * b must have a.cols_ = b.rows_
    Matrix temp(rows_, m.cols_);
    for (int i = 0; i < temp.rows_; ++i) {
        for (int j = 0; j < temp.cols_; ++j) {
            for (int k = 0; k < cols_; ++k) {
                temp.p[i][j] += (p[i][k] * m.p[k][j]);
            }
        }
    }
    return (*this = temp);
}

template <typename T>
Matrix<T> operator+(const Matrix<T>& m1, const Matrix<T>& m2)
{
    Matrix<T> temp(m1);
    return (temp += m2);
}

template <typename T>
Matrix<T> operator-(const Matrix<T>& m1, const Matrix<T>& m2)
{
    Matrix<T> temp(m1);
    return (temp -= m2);
}

template <typename T>
Matrix<T> operator*(const Matrix<T>& m1, const Matrix<T>& m2)
{
    Matrix<T> temp(m1);
    return (temp *= m2);
}

#endif /* Matrix_h */
