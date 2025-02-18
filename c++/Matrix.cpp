#include "Matrix.hpp"

Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;
}

void Matrix::input() {
    cout << "Enter elements for " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> data[i][j];
        }
    }
}

void Matrix::display() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix Matrix::add(const Matrix& second) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result.data[i][j] = data[i][j] + second.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::sub(const Matrix & second) const {
 Matrix result2(rows, cols);
 for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
   result2.data[i][j] = data[i][j] - second.data[i][j];
    }
 } 
   return result2;
}

  bool Matrix::isIdentity() const 
 {
   if(rows != cols)
   return false;

   for(int i =0; i<rows; i++){
    for(int j=0; j<cols; j++){
        if(i == j && data[i][j] !=1  ||  i != j && data[i][j] !=0){
        return false;      
        }
    }
   }
   return true;
 }
