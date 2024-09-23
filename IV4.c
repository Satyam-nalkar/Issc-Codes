#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i+2)
    {
     sum=sum+i;
    }
    printf("sum of even number up to %d is %d",n,sum);
    return 0;

}