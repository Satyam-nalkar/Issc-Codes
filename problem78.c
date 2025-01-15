#include<stdio.h>
int main()
{
    int i;
    for ( i = 75; i < 7500000; i*=75)
    {
        printf("%d\n",i);
    }
}