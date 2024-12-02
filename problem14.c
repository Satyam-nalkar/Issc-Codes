#include<stdio.h>
int main()
{
    int i;
    for ( i = 11; i < 110000; i*=11)
    {
        printf("%d\n",i);
    }
}