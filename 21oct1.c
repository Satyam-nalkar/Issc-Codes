#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter 10 integer\n");
    for ( i = 0; i < 10; i++)
    {
      scanf("%d",&a[i]);    
    }
    int sum=0;
    for ( i = 0; i < 10; i++)
    sum+=a[i];
    printf("the sum is:%d\n",sum);
    return 0;
}