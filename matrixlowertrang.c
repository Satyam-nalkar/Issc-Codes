#include<stdio.h>
int main()
{
    int i,j,n,r,c;
    printf("Enter the number of row");
    scanf("%d",&r);
    printf("Enter the number of col");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the value for matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("Enter the value for matrix %d%d",i,j);
        scanf("%d",&mat[i][j]);
        }
    }
    printf("Lower trangular addition:");
    for(i=0;i<n;i++)
    {
        int sum=0;
      for(j=0;j<n;j++)
      {
      if(i>j)
      {
       int sum += mat[i][j];
        {
            printf("sum of element:%d",sum);
        }
      }
        printf("\n");
      }

    }
   return 0;
}