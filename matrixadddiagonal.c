#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of row:");
    scanf("%d",&r);
    printf("Enter the number of col:");
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
         int sum=0;
         for(i=0;i<r;i++)
         {

            for(j=0;j<c;j++)
             {
                if(i==j)
                {
              sum=sum+mat[i][j];
              printf("sum of diagonal is %d",sum);
               }
             }
          
         }
         printf("\n");
      
    return 0;
}