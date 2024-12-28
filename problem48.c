#include<stdio.h>
int main()
{
    int i;
    for ( i = 45; i < 4500000; i*=45)
    {
        printf("%d\n",i);
    }
}