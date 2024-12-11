#include<stdio.h>
int main()
{
    int i;
    for ( i = 12; i < 120000; i*=12)
    {
        printf("%d\n",i);
    }
}