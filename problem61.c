#include<stdio.h>
int main()
{
    int i;
    for ( i = 58; i < 5800000; i*=58)
    {
        printf("%d\n",i);
    }
}