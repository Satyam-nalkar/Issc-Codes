#include<stdio.h>
int main()
{
    int i;
    for ( i = 91; i < 9100000; i*=91)
    {
        printf("%d\n",i);
    }
}
