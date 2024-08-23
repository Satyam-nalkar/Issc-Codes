#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
     if(a>=b && a>=c)
     {
        printf("the largest number is%d",a);
     }
     if(b>=a && b>=c)
     {
        printf("the largest number is%d",b); 
     }
     if(c>=a && c>=b)
     printf("the largest number is %d",c);
     return 0;
}