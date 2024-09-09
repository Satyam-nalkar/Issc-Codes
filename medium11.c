#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=0;i<=50;i++)
    {
     if (i%2==0)
      {     
       sum=sum+i;
      }
    }

    printf("sum is %d:",sum);
    return 0;
}