#include<stdio.h>
int main()
{
    int i;
    for ( i = 57; i < 5700000; i*=57)
    {
        printf("%d\n",i);
    }
}