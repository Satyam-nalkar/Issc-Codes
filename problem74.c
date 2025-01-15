#include<stdio.h>
int main()
{
    int i;
    for ( i = 71; i < 7100000; i*=71)
    {
        printf("%d\n",i);
    }
}