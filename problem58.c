#include<stdio.h>
int main()
{
    int i;
    for ( i = 55; i < 5500000; i*=55)
    {
        printf("%d\n",i);
    }
}