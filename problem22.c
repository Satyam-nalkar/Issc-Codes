#include<stdio.h>
int main()
{
    int i;
    for ( i = 19; i < 190000; i*=19)
    {
        printf("%d\n",i);
    }
}