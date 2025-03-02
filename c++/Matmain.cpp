#include<iostream>
#include "Matrix.hpp"
 
int main()
{
    int rows,cols;
    cout << "Enter the number of rows and colums:";
    cin >> rows >> cols;

   Matrix matrix1(rows,cols);
   Matrix matrix2(rows,cols);
   
   cout << "Enter the value for Matrix 1:\n";
   matrix1.input();
  
   cout << "Enter the value for Matrix 2:\n";
   matrix2.input();
    
   Matrix result = matrix1.add(matrix2);
   cout << "Summation of Matrix:\n";
   result.display();
    
   Matrix result2 = matrix1.sub(matrix2);
   cout << "Subtraction of Matrix:\n";
   result2.display();
   
   Matrix result3 = matrix1.mult(matrix2);
   cout << "Multiplication of Matrix:\n";
   result3.display();

   
   cout << "\n";
   if(result3.isIdentity()){
    cout << "the matrix is an identity matrix. \n";
   }
   else{
    cout << "the matrix is not an identity matrix. \n";
    }
   


   cout<<"\n";
   if(result.isSymmetric()){
    cout << "the matrix is a symmetric matrix. \n";
   }
   else{
    cout << "the matrix is not a symmetric matrix. \n";
    }

  cout<<"Gauss elimination with basic pivoting.\n";
  matrix1.gaussElimination();

  double x[rows];
  cout << "Back sunstitution.\n";
  matrix1.backSubstitution(x);

  cout<<"values for x \n";
  for(int i=0;i<rows;i++){
    cout << "x[" << i << "] = " << x[i] << endl;
  }

   return 0;
}