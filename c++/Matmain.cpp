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
   cout << "Resultant sum Matrix:\n";
   result.display();
    
   Matrix result2 = matrix1.sub(matrix2);
   cout << "Resultant sub Matrix:\n";
   result2.display();

   
   cout << "\n";
   if(result.isIdentity()){
    cout << "the matrix is an identity matrix. \n";
   }
   else{
    cout << "the matrix is not an identity matrix. \n";
    }
   return 0;

}