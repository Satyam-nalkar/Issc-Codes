#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
     switch (a)
     {
     case 10:
     printf("result :%d\n",a/2);
     break;
     case 20 :
     printf("result :%d\n",a/3);
     break;
     case 30:
     printf("result :%d\n",a/4);
     break;
     case 40:
     printf("result :%d\n",a/5);
     break;
     default:
     printf("the number is not consider under above condition\n");
     }
  return 0;
}