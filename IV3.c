#include<stdio.h>
int main()
{
    int n;
    printf("enter the positive integer:");
    scanf("%d",&n);
    printf("Odd number from 1 to %d\n",n);
    int i=1;
    while(i<n)
    {
        printf("%d\n",i);
        i=i+2;

    }
    return 0;
}