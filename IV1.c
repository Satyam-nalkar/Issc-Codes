#include<stdio.h>
int main()
{
    int n;
    printf("Enter the positive integer :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter the positive integer");
        return 1;
    }
    while (n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}