#include<stdio.h>
int main()
{
    int i;
    for ( i = 74; i < 7400000; i*=74)
    {
        printf("%d\n",i);
    }
}