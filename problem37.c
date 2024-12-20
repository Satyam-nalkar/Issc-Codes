#include<stdio.h>
int main()
{
    int i;
    for ( i = 34; i < 340000; i*=34)
    {
        printf("%d\n",i);
    }
}