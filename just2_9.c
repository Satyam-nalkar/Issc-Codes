#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d",&a);
    if(a>=100 && a<=200)
    {
    int result=a/3;
     if(result<50)    
    {
    printf("small number\n");
    }
    else
    {
        printf("not so big\n");
    }
    }
    else if(a>200 && a<=300)
    {
    int result=a/2;
    if(result<110)
    {
        printf("%d",result);
    }
    else
    {
        printf("%d\n",result/5);
    }
    }
    else if(a>300)
    {
        printf("very big number");
    }
    else
    {
        printf("it is less than 100");
    }
 return 0;
}

