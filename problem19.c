#include<stdio.h>
int main()
{
    int i;
    for ( i = 16; i < 160000; i*=16)
    {
        printf("%d\n",i);
    }
}