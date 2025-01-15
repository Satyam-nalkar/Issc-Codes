#include<stdio.h>
int main()
{
    int i;
    for ( i = 65; i < 6500000; i*=65)
    {
        printf("%d\n",i);
    }
}