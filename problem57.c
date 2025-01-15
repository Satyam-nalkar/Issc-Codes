#include<stdio.h>
int main()
{
    int i;
    for ( i = 54; i < 5400000; i*=54)
    {
        printf("%d\n",i);
    }
}