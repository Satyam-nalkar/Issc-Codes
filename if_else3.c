#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year");
    scanf("%d",&n);
    if (n % 4==0)
        printf("It is leap year\n");
    else
        printf("It is not leap year\n");
        return 0;
} 