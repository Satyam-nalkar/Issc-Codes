#include<stdio.h>
int main()
{
    int i;
    for ( i = 79; i < 7900000; i*=79)
    {
        printf("%d\n",i);
    }
}
