#include<stdio.h>
int main()
{
    int i;
    for ( i = 72; i < 7200000; i*=72)
    {
        printf("%d\n",i);
    }
}