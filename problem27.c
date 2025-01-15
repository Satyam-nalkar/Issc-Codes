#include<stdio.h>
int main()
{
    int i;
    for ( i = 24; i < 240000; i*=24)
    {
        printf("%d\n",i);
    }
}