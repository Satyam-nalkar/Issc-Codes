#include "Matrix.hpp"
using namespace std;
Matrix::Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

void Matrix::input() {
    cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> data[i][j];
        }
    }
}

void Matrix::display() const {
    for (const auto &row : data) {
        for (int val : row) {
            cout << val << " ";
        }
            cout << endl;
    }
}

Matrix Matrix::operator+(const Matrix &other) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.data[i][j] = this->data[i][j] + other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(const Matrix &other) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.data[i][j] = this->data[i][j] - other.data[i][j];
        }
    }
    return result;
}

