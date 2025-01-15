#include<stdio.h>
int main()
{
    int i;
    for ( i = 25; i < 250000; i*=25)
    {
        printf("%d\n",i);
    }
}