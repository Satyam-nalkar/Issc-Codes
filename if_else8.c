#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer ");
    scanf("%d",&n);
    if (n>100 && n<= 200)
    {
      printf("It is small number\n");
    }
    else if (n>200 && n<=300)
    {
      printf("It is big number\n");
    }
    else if (n>300 && n<=400)
    {
       printf("It is large number\n");
    }
    else if (n>400)
    {
      printf("It is very large number\n");
    }
    else
    {
         printf("number is less than 100\n");
    }
    return 0;
    
}