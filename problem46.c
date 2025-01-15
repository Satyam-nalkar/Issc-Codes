#include<stdio.h>
int main()
{
    int i;
    for ( i = 43; i < 4300000; i*=43)
    {
        printf("%d\n",i);
    }
}