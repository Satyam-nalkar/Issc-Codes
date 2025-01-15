#include<stdio.h>
int main()
{
    int i;
    for ( i = 70; i < 7000000; i*=70)
    {
        printf("%d\n",i);
    }
}