#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter 10 integer\n");
    for ( i = 0; i < 10; i++)
    {
      scanf("%d",&a[i]);    
    }
   // printf("%d\n",a[i]);
    int sum=0;
    for ( i = 0; i < 10; i++)
    sum+=a[i];
    int avg=sum/10;
    printf("the sum is:%d avg is %d\n",sum,avg);
    
  
}