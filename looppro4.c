#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
       if (i%2==0)
       {
        printf("%d\n",i);
        sum+=i;
       }
    }
    printf("Even number from 1 to %d: %d\n",i,sum);
}