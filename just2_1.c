#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the number is positive\n");
    }
    else if(a<0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("you entered neither positive nor negative number");
    }
}
