#include<iostream>
using namespace std;
 
class Matrix {
    private:
    int rows, cols;
    int **data;
     
    public:
    Matrix(int r = 0, int c= 0);
    Matrix(const Matrix &other);        // Copy constructor

    ~Matrix();
     void input();
     void display() const;
     Matrix add(const Matrix & second) const;
     Matrix sub(const Matrix & second) const;
     Matrix mult(const Matrix & second) const;
     void gaussElimination() const;
     void backSubstitution(double x[]);
     bool isIdentity() const;
     bool isSymmetric() const;
     
};