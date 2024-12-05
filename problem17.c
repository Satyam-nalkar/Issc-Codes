#include<stdio.h>
int main()
{
    int i;
    for ( i = 14; i < 140000; i*=14)
    {
        printf("%d\n",i);
    }
}