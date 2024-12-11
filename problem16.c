#include<stdio.h>
int main()
{
    int i;
    for ( i = 13; i < 130000; i*=13)
    {
        printf("%d\n",i);
    }
}