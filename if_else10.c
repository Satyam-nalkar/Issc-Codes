#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n==10)
    {
       printf("it is devide by 2 :%d\n",n/2); 
    }
    else if (n==20)
    {
       printf("it is devide by 3 :%d\n",n/3);
    }
    else if (n==30)
    {
       printf("it is devide by 4 :%d\n",n/4);
    }
    else if (n==50)
    {
       printf("it is devide by 5 :%d\n",n/5);
    }
    else
    {
    printf("The number not consider under condition\n");
    }
}
