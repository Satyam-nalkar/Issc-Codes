#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the positive integer ");
    scanf("%d",&n);
    printf("print even number from 1 to %d\n",n);
    for ( i = 1; i < n; i++)
    {
        if(i % 2 ==0)
        {
        printf("It is even %d\t",i);
        }
        else if(i % 2!=0)
        {
        printf("It is odd %d\n",i);
        }
    }
    return 0;
}
