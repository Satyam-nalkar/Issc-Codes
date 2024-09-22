#include<stdio.h>
int main()
{
    int n;
    printf("Enter the positive integer:\n");
    scanf("%d",&n);
    printf("Even number from 1 to %d\n",n);
    int i=2;
    while (i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}