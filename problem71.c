#include<stdio.h>
int main()
{
    int i;
    for ( i = 68; i < 6800000; i*=68)
    {
        printf("%d\n",i);
    }
}