#include<stdio.h>
int main()
{
    int i;
    for ( i = 41; i < 4100000; i*=41)
    {
        printf("%d\n",i);
    }
}