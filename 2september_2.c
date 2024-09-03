#include<stdio.h>
int main()
{
    int i,j,sum,a[3][3];
    printf("Enter the elements of matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
         //diagonal element sum 
      for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(i==j || i+j==2)
            {
              
               sum=sum+a[i][j];  
            }
        }
    }
        printf("the sum of diagonal elements is: %d\n",sum);

    return 0;
    
}