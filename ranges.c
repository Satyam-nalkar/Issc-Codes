#include<stdio.h>
 int main()
  {
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a>=100 && a<=200)
    {
        printf("It is small number\n");
    }
    else if(a>=201 && a<=300)
    {
        printf("It is big number\n");
    }
    else if(a>=301 && a<=400)
    {
        printf("It is large number\n");
    }
    else 
    {
        printf("the number is less than 100\n");
    }
    return 0;
  }
