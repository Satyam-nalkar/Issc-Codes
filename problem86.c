#include<stdio.h>
int main()
{
    int i;
    for ( i = 83; i < 8300000; i*=83)
    {
        printf("%d\n",i);
    }
}
