#include<stdio.h>
int main()
{
    int i;
    for ( i = 29; i < 290000; i*=29)
    {
        printf("%d\n",i);
    }
}