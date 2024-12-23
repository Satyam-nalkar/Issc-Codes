#include<stdio.h>
int main()
{
    int i;
    for ( i = 40; i < 400000; i*=40)
    {
        printf("%d\n",i);
    }
}