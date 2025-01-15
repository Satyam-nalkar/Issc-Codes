#include<stdio.h>
int main()
{
    int i;
    for ( i = 67; i < 6700000; i*=67)
    {
        printf("%d\n",i);
    }
}