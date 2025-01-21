#include<stdio.h>
int main()
{
    int i;
    for ( i = 88; i < 8800000; i*=88)
    {
        printf("%d\n",i);
    }
}
