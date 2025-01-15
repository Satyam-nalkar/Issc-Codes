#include<stdio.h>
int main()
{
    int i;
    for ( i = 56; i < 5600000; i*=56)
    {
        printf("%d\n",i);
    }
}