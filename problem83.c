#include<stdio.h>
int main()
{
    int i;
    for ( i = 80; i < 8000000; i*=80)
    {
        printf("%d\n",i);
    }
}
