#include "Matrix.hpp"

Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;
    data =new int*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new int[cols];
    }
}

Matrix::Matrix(const Matrix & other) {
    rows = other.rows;
    cols = other.cols;
    data = new int*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            data[i][j] = other.data[i][j];
        }
    }
}

Matrix::~Matrix() {
    if(data){
    for(int i =0; i < rows; i++){
        delete[] data[i];
    }
    delete[] data;
  }
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

Matrix Matrix::mult(const Matrix & second) const{
    if (cols != second.rows) {
        cout << "Matrices cannot be multiplied.\n";
        return Matrix(0, 0); // Return empty matrix
    }

    Matrix result3(rows, second.cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<second.cols; j++){     
           result3.data[i][j]=0;

        }
    }

     for(int i=0; i<rows; i++){
          for(int j=0; j<second.cols; j++){
             for(int k=0; k<cols; k++){
                result3.data[i][j] += data[i][k] * second.data[k][j];
            }
          }
    }
    return result3;
}



void Matrix::gaussElimination() const {
    for(int k=0; k < rows -1; k++){
        if(data[k][k]==0){
            for(int j= k + 1; j < cols -1; j++){
                if(data[k][j] != 0){
                   for( int i = 0; i< rows; i++) {
                    swap(data[i][k],data[i][j]);
                   } 
                   break;
                }
            }
        }
    if(data[k][k] == 0){
        cout << "Matrix is singular.\n";
        return;
    }

    for(int i=k+1; i<rows; i++){
        double factor = data[i][k] / data[k][k];
          for(int j= k+1; j<cols; j++){
            data[i][j] -= factor * data[k][j];
        }
        data[i][k] = 0;
      }

    }
}

  // Back Substitution
  void Matrix::backSubstitution(double x[]) {  
    for (int i = rows - 1; i >= 0; i--) {
        if (data[i][i] == 0) {
            cout << "No unique solution exists.\n";
            return;
        }
        x[i] = data[i][cols - 1];  
        for (int j = i + 1; j < rows; j++) {
            x[i] -= data[i][j] * x[j];
        }
        x[i] /= data[i][i];  
    }
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

  bool Matrix::isSymmetric() const
  {
    if(rows!= cols)
    return false;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(data[i][j]!= data[j][i])
            return false;
        }
    }
    return true;

 }
