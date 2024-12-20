#include<stdio.h>
int main()
{
    int i;
    for ( i = 35; i < 350000; i*=35)
    {
        printf("%d\n",i);
    }
}