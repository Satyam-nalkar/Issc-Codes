#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d",&a);
    if(a>=100 && a<=200)
    {
    printf("it is small number%d\n",a);
    }
    else if(a>=201 && a<=300)
    {
        printf("it is big number%d\n",a);
    }
    else if(a>=301 && a<=400)
    {
        printf("it is large number%d\n",a);
    }
    else if(a>400)
    {
  printf("very large number");
    }
    else 
    {
        printf("it is less than 100");
    }
    return 0;
}