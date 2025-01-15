#include<stdio.h>
int main()
{
    int i;
    for ( i = 64; i < 6400000; i*=64)
    {
        printf("%d\n",i);
    }
}