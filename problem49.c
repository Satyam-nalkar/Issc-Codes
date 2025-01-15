#include<stdio.h>
int main()
{
    int i;
    for ( i = 46; i < 4600000; i*=46)
    {
        printf("%d\n",i);
    }
}