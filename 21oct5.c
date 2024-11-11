#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int n = 5;
    do
    {
     for ( i = 0; i < 5; i++)
     { 
     printf("%d\n",a[i]);
     }
     n=a[i]+1;
    } while (n<=5);
    

}