#include<stdio.h>
int main()
{
    int i;
    for ( i = 76; i < 7600000; i*=76)
    {
        printf("%d\n",i);
    }
}