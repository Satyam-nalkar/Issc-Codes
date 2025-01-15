#include<stdio.h>
int main()
{
    int i;
    for ( i = 62; i < 6200000; i*=62)
    {
        printf("%d\n",i);
    }
}