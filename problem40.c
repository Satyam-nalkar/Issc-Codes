#include<stdio.h>
int main()
{
    int i;
    for ( i = 37; i < 370000; i*=37)
    {
        printf("%d\n",i);
    }
}