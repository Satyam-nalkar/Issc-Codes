#include<stdio.h>
int main()
{
    int i;
    for ( i = 77; i < 7700000; i*=77)
    {
        printf("%d\n",i);
    }
}