#include<stdio.h>
int main()
{
    int i;
    for ( i = 22; i < 220000; i*=22)
    {
        printf("%d\n",i);
    }
}