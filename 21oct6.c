#include<stdio.h>
int main()
{
    int i,a[10];
    int odd;
    printf("Enter 10 integer\n");
    for ( i = 0; i < 10; i++)
    {
      scanf("%d",&a[i]);    
    }
   // printf("%d\n",a[i]);
    int sum=0;
    for ( i = 0; i < 10; i++)
    {
    sum+=a[i];
    odd=(sum % 2!=0);
    }
    printf("the sum is:%d odd entity %d\n",sum,odd);
    return 0;
  
}