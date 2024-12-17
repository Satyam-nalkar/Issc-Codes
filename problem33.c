#include<stdio.h>
int main()
{
    int i;
    for ( i = 30; i < 300000; i*=30)
    {
        printf("%d\n",i);
    }
}