#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);
    int mat[r][c];
      printf("enter the value of matrix:\n");
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
        {
        printf("Enter the value for matrix%d%d\t",i,j);
        scanf("%d",&mat[i][j]);
        }
      }
      printf("The matrix is:\n");
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
        {
        printf("%d\t",mat[i][j]);
        }
        printf("\n");
      }

    return 0;
}