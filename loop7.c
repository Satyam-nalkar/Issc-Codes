#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the positive integer ");
    scanf("%d",&n);
    printf("print number from 1 to %d\n",n);
    for ( i = 1; i<=n; i++)
    {
        printf("%d= %d\n",i,i*i);
    }
    return 0;
}
