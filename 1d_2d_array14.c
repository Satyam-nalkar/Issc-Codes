#include<stdio.h>
int main()
{
    int i,j;
    int sum,a[3][3];
    printf("Enter the value for matrix:");
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
        sum =0;
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
            sum+=a[i][j];
        }
       printf("the row addition is");
       printf("sum of row %d=%d\n",i,sum);
    }
     printf("column addion\n");
     for ( j = 0; j < 3; j++)
    {  
        sum =0;
         for ( i = 0; i < 3; i++)
        {
            printf("%d\t",a[i][j]);
            sum+=a[i][j];
        }
       printf("the col addition is");
       printf("sum of col %d=%d\n",j,sum);
    }
    return 0;
}