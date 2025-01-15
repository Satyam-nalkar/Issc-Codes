#include<stdio.h>
int main()
{
    int i;
    for ( i = 31; i < 310000; i*=31)
    {
        printf("%d\n",i);
    }
}