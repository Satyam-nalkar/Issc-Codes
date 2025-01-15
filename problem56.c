#include<stdio.h>
int main()
{
    int i;
    for ( i = 53; i < 5300000; i*=53)
    {
        printf("%d\n",i);
    }
}