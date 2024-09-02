#include<stdio.h>
int main()
{
    int i,j,k,r,c,p,q;
    printf("Enter the number of row of matrix A");
    scanf("%d",&r);
    printf("Enter the number of col of matrix A");
    scanf("%d",&c);
    printf("Enter the number of row of matrix B");
    scanf("%d",&p);
    printf("Enter the number of col of matrix B");
    scanf("%d",&q);
    int mat[r][c];
     mat[p][q];
    printf("Enter the value for matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value for matrix A: %d%d\t",i,j);
            scanf("%d",&mat[i][j]);
        }
        
    }
     for(i=0;i<p;i++)
       {
        for(j=0;j<q;j++)
        {
            printf("Enter the value for matrix B: %d%d\t",i,j);
            scanf("%d",&mat[i][j]);
        }
      }
      printf("the result matrix is:");
      int product[3][3];
      int sum=0;
        for(i=0;i<r;i++)
       {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
          {
           sum=sum+mat[i][k]*mat[k][j];
          }
          product[i][j]=sum;
          sum=0;
        } 
       }  
       printf("Resultant matrix\n");
       for(i=0;i<r;i++)
       {
        for(j=0;j<q;j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
       }
       return 0;
}