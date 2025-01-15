#include<stdio.h>
int main()
{
    int i;
    for ( i = 49; i < 4900000; i*=49)
    {
        printf("%d\n",i);
    }
}