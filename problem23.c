#include<stdio.h>
int main()
{
    int i;
    for ( i = 20; i < 200000; i*=20)
    {
        printf("%d\n",i);
    }
}