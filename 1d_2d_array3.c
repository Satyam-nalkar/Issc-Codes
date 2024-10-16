#include<stdio.h>
int main()
{
    int i;
    float n[5];
    printf("Enter five ploating number\n");
    for ( i = 0; i < 5; i++)
    {
       scanf("%f",&n[i]);
    }
    printf("you entered this floating point numbers\n");
    for ( i = 0; i < 5; i++)
    {
       printf("%.3f\n",n[i]);
    }
    return 0;
}