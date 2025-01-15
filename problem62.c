#include<stdio.h>
int main()
{
    int i;
    for ( i = 59; i < 5900000; i*=59)
    {
        printf("%d\n",i);
    }
}