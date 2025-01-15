#include<stdio.h>
int main()
{
    int i;
    for ( i = 23; i < 230000; i*=23)
    {
        printf("%d\n",i);
    }
}