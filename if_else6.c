#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer");
    scanf("%d",&n);
    if(n<10)
    {
     printf("number is less than 10\n");
    }   
    else
    if (n>10)
     {
       printf("number is greater than 10\n");    
     }
    else
    { 
    printf("number is 10\n");
    }
    return 0;
}