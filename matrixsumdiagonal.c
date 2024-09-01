#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of row");
    scanf("%d",&r);
    printf("Enter the number of column");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the value for matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         printf("Enter the value for matrix %d%d\t",i,j);
         scanf("%d",&mat[i][j]);   
        }
    }
    printf("Sum of diagonal number:\n");  
    for(i=0;i<r;i++)
    {
      int sum=0;
     for(j=0;j<c;j++)
    
    if(i==j)
    {
      sum+=mat[i][j];
      {
        printf("diagonal element sum:%d",mat[i][j]);     
      }
     printf("\n");
    }
    }

}