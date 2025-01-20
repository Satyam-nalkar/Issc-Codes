#include<stdio.h>
int main()
{
    int i;
    for ( i = 81; i < 8100000; i*=81)
    {
        printf("%d\n",i);
    }
}
