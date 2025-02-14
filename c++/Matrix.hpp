#include <iostream>
#include <vector>

class Matrix {
private:
    int rows, cols;
    std::vector<std::vector<int>> data;

public:
    Matrix(int r, int c);
    void input();
    void display() const;
    Matrix operator+(const Matrix &other) const;
    Matrix operator-(const Matrix &other) const;
};


