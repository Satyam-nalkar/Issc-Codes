#include<stdio.h>
int main()
{
    int i;
    for ( i = 61; i < 6100000; i*=61)
    {
        printf("%d\n",i);
    }
}