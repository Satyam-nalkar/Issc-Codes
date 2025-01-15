#include<stdio.h>
int main()
{
    int i;
    for ( i = 32; i < 320000; i*=32)
    {
        printf("%d\n",i);
    }
}