#include <stdio.h>

int main() 
{
    int a, b, k;
    printf("Enter two integers: ");
    scanf("%d%d", &a,&b);
    a=b;
    b=k;
    a=k;
    printf("After swap: a=%d, b=%d\n",a,b);
    return 0;
}
