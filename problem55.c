#include<stdio.h>
int main()
{
    int i;
    for ( i = 52; i < 5200000; i*=52)
    {
        printf("%d\n",i);
    }
}