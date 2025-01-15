#include<stdio.h>
int main()
{
    int i;
    for ( i = 39; i < 390000; i*=39)
    {
        printf("%d\n",i);
    }
}