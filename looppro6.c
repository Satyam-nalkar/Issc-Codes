#include<stdio.h>
int main()
{
    int n,i;
    int sum = 0;
    printf("Enter the number");
    scanf("%d",&n);
    while (n!=0)
    {
       sum += n%10;
       n /= 10;
       printf("The sum of the digit is:%d\n",sum);
    }
    return 0;
}