#include<stdio.h>
int main()
{
    int i;
    for ( i = 27; i < 270000; i*=27)
    {
        printf("%d\n",i);
    }
}