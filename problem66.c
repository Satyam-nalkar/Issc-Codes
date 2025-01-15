#include<stdio.h>
int main()
{
    int i;
    for ( i = 63; i < 6300000; i*=63)
    {
        printf("%d\n",i);
    }
}