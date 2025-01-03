#include<stdio.h>
int main()
{
    int i;
    for ( i = 51; i < 5100000; i*=51)
    {
        printf("%d\n",i);
    }
}