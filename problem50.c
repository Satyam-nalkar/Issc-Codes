#include<stdio.h>
int main()
{
    int i;
    for ( i = 47; i < 4700000; i*=47)
    {
        printf("%d\n",i);
    }
}