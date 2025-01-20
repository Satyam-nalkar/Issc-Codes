#include<stdio.h>
int main()
{
    int i;
    for ( i = 85; i < 8500000; i*=85)
    {
        printf("%d\n",i);
    }
}
