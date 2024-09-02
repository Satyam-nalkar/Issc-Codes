#include<stdio.h>
int main()
{
    int i,j,max,r,c;
    printf("Enter the number of row of matrix A");
    scanf("%d",&r);
    printf("Enter the number of col of matrix A");
    scanf("%d",&c);
    printf("Enter the number of row of matrix B");
    scanf("%d",&r);
    printf("Enter the number of col of matrix B");
    scanf("%d",&c);
    int A[r][c];
    int B[r][c];
    printf("Enter the value for matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value for matrix A: %d%d\t",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
     for(i=0;i<r;i++)
       {
        for(j=0;j<c;j++)
        {
            printf("Enter the value for matrix B: %d%d\t",i,j);
            scanf("%d",&B[i][j]);
        }
      }
      printf("the result matrix is:\n");
      int product[r][c];
      for(i=0;i<r;i++)
       {
          for(j=0;j<c;j++)
          {
            product[i][j]=A[i][j]+B[i][j];
          printf(" %d \t",product[i][j]);
          }
          printf("\n");
       }

}
        