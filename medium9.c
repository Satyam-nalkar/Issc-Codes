#include<stdio.h>
int main()
{
    int i;  //i is a factorial for n
    int n;
    int factorial=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
      {
        printf("factorial is not define for negative number:");
      }
      i=n; //it is for decrement from n
       while (i>1)
         {
         factorial=factorial*i; //define the factorial value
         i--;
         }
    printf("factorial of %d is %d:\n",n,factorial);
    return 0;
}