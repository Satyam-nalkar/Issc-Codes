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
     void inputFromFile(const string &filename);
     void display() const;
     Matrix add(const Matrix & second) const;
     Matrix sub(const Matrix & second) const;
     Matrix mult(const Matrix & second) const;
     Matrix upperTriangular() const;
    //  Matrix lowerTriangular() const;
    void luDecomposition(Matrix &L, Matrix &U) const;
    void multiplyLU(const Matrix &L, const Matrix &U, Matrix &result) const;
     void backSubstitution(double x[]);
     bool isIdentity() const;
     bool isSymmetric() const;
     
};