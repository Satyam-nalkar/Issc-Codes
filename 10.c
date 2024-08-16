#include<stdio.h>
int main()
{
    int a;
    printf("Enter the integer:");
    scanf("%d",&a);
    if(a<10)
    {
    printf("the integer is small\n");
    }
    else if(a>10)
    {
    printf("the integer is large\n");
    }
    else
    {
     printf("the number is 10.\n");
    }
  return 0;
}