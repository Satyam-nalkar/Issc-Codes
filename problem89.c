#include<stdio.h>
int main()
{
    int i;
    for ( i = 86; i < 8600000; i*=86)
    {
        printf("%d\n",i);
    }
}
