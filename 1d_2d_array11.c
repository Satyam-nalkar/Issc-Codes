#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2];

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
        for ( j = 0; j < 2; j++)
        {
          printf("%d\t",a[i][j]);
         }
      printf("\n");
        
    }
    return 0;   
}
