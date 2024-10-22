#include<stdio.h>
int main()
{
    int i,j;
    int  sum,a[2][2];

    printf("Enter the value for matrix");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
        printf("the matrix is\n");
     for ( i = 0; i < 2; i++)
    {
        sum=0;
        for ( j = 0; j < 2; j++)
         {
          printf("%d\t",a[i][j]);
          sum += a[i][j];
         }
      printf("sum of row %d=%d\n",i,sum);
    }
    return 0;   
}
