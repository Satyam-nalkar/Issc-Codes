#include "Matrix.hpp"

Matrix::Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<int>(c, 0)) {}

void Matrix::input() {
    std::cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> data[i][j];
        }
    }
}

void Matrix::display() const {
    for (const auto &row : data) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
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

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    Matrix A(rows, cols);
    Matrix B(rows, cols);

    std::cout << "Enter values for Matrix A:\n";
    A.input();

    std::cout << "Enter values for Matrix B:\n";
    B.input();

    std::cout << "Matrix A:\n";
    A.display();

    std::cout << "Matrix B:\n";
    B.display();

    Matrix sum = A + B;
    std::cout << "Addition Result:\n";
    sum.display();

    Matrix diff = A - B;
    std::cout << "Subtraction Result:\n";
    diff.display();

    return 0;
}
