#include<stdio.h>
int main()
{
    int i;
    for ( i = 73; i < 7300000; i*=73)
    {
        printf("%d\n",i);
    }
}