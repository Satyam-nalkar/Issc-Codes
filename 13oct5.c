#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d",&a);
    printf("%d\n",a);
    if(a % 2==0)
    printf("It is even number\n");
    else
    printf("It is odd number\n");
    return 0;
}