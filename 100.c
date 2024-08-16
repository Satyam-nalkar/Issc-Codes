#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a<100)
    {
        printf("It is a small number\n");
    }
    else if(a>1000)
    {
        printf("It is a very large number\n");
    }
    else if(a>200)
     {
        printf("It is large number\n");
     }
     else
     {
        printf("the number is between 100 amd 200.\n");
     }
     return 0;
}