#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer");
    scanf("%d %d",&a,&b);
     int sum = a+b;
     int sub = a-b;
     int mult =a*b;
     printf("sum=%d ,sub=%d ,mult=%d",sum,sub,mult);
    return 0;
}