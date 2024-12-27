#include<stdio.h>
int main()
{
    int i;
    for ( i = 44; i < 4400000; i*=44)
    {
        printf("%d\n",i);
    }
}