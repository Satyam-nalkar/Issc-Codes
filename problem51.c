#include<stdio.h>
int main()
{
    int i;
    for ( i = 48; i < 4800000; i*=48)
    {
        printf("%d\n",i);
    }
}