#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int b[3][3];
    int sum[3][3];
    printf("Enter the value for matrix a:");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("Enter the value for matrix b:");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("sum of two matrices:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        sum[i][j]=a[i][j]+b[i][j];
         printf("%d\t",sum[i][j]);
       }
       printf("\n");
    }
        
    return 0;
}