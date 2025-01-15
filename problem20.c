#include<stdio.h>
int main()
{
    int i;
    for ( i = 17; i < 170000; i*=17)
    {
        printf("%d\n",i);
    }
}