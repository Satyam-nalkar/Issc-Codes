#include<stdio.h>
int main()
{
    int i;
    for ( i = 90; i < 9000000; i*=90)
    {
        printf("%d\n",i);
    }
}
