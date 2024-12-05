#include<stdio.h>
int main()
{
    int i;
    for ( i = 15; i < 150000; i*=15)
    {
        printf("%d\n",i);
    }
}