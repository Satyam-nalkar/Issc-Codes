#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d",&a);
    if(a==10)
   {
      printf("a=%d",a/2);
    }   
    else if(a==20)
    {
        printf("a=%d",a/3);
    }
    else if(a==30)
    {
        printf("a=%d",a/4);
    }
    else if(a==50)
    {
        printf("a=%d",a/5);
    }    
    else
    {
        printf("the number not consider\n");
    }
    return 0;
}
