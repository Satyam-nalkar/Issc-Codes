#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer");
    scanf("%d",&n);
    if(n>0)
     printf("It is positive integer\n");
     else
     if(n<0)
     printf("It is negative integer\n");
     else
     printf("It is neither positive nor negative\n");
     return 0;
}