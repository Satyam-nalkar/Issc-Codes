#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
     {
        printf("a =%d is largest number\n",a);
     }
     else if(b>a && b>c)
     {
        printf("b =%d is largest number\n",b);
     }
     else
     {
        printf("c =%d is largest number\n",c);
     }
     return 0;
} 