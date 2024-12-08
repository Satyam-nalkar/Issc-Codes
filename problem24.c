#include<stdio.h>
int main()
{
    int i;
    for ( i = 21; i < 210000; i*=21)
    {
        printf("%d\n",i);
    }
}