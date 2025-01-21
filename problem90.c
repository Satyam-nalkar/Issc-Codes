#include<stdio.h>
int main()
{
    int i;
    for ( i = 87; i < 8700000; i*=87)
    {
        printf("%d\n",i);
    }
}
