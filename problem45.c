#include<stdio.h>
int main()
{
    int i;
    for ( i = 42; i < 4200000; i*=42)
    {
        printf("%d\n",i);
    }
}