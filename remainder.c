#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer:");
    scanf("%d%d",&a,&b);
    if(b!=0)
     {
        printf("Quotient: %d\n",a/b);
        printf("Remainder %d\n",a%b);
     }
     else
      {
        printf("b = 0 is not allowed");
      }
      return 0;
}