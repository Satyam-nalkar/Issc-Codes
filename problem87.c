#include<stdio.h>
int main()
{
    int i;
    for ( i = 84; i < 8400000; i*=84)
    {
        printf("%d\n",i);
    }
}
