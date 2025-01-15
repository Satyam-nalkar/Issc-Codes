#include<stdio.h>
int main()
{
    int i;
    for ( i = 50; i < 5000000; i*=50)
    {
        printf("%d\n",i);
    }
}