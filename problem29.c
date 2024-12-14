#include<stdio.h>
int main()
{
    int i;
    for ( i = 26; i < 260000; i*=26)
    {
        printf("%d\n",i);
    }
}