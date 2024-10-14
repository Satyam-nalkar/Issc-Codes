#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer ");
    scanf("%d",&n);
    if (n<100)
    {
        printf("it is small number\n");
    }
    else if(n>200)
    {
        printf("it is greater number\n");
    }
    else if (n>1000)
    {
      printf("it is very large number\n");
    }
    else
    {
       printf("the number is between 100 and 200\n");
    }
    return 0;
}