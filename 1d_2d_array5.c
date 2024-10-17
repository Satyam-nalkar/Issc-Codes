#include<stdio.h>
int main()
{
    int i, n[5];
    printf("Enter five integer\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&n[i]);
    }
    int sum =n[0]+n[1];
    for ( i = 2; i < 5; i++)
    {
         sum += n[i];
    }
    printf("sum = %d",sum);
    return 0;
}