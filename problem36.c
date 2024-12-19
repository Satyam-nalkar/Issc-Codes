#include<stdio.h>
int main()
{
    int i;
    for ( i = 33; i < 330000; i*=33)
    {
        printf("%d\n",i);
    }
}