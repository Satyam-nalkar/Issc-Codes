#include<stdio.h>
int main()
{
    int i;
    for ( i = 66; i < 6600000; i*=66)
    {
        printf("%d\n",i);
    }
}