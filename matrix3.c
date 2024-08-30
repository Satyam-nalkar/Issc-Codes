#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of row:");
    scanf("%d",&r);
     printf("Enter the number of column:");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the value of matrix");
      for(i=0;i<r;i++)
      {
        int sum=4;
        for(j=0;j<c;j++)
        {
            sum+=mat[r][c];
            printf("sum=%d\n",sum);
            printf("Enter the value for matrix%d%d\t",i,j);
            scanf("%d",&mat[i][j]);
        }
      }
    printf("the matrix is\n");
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