#include<stdio.h>
int main()
{
    int i;
    for ( i = 60; i < 6000000; i*=60)
    {
        printf("%d\n",i);
    }
}