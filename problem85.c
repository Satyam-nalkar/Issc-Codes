#include<stdio.h>
int main()
{
    int i;
    for ( i = 82; i < 8200000; i*=82)
    {
        printf("%d\n",i);
    }
}
