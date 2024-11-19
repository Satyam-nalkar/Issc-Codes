#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer\n");
    scanf("%d %d ",&a,&b);
    int c = b;
        b = a;
        a = c;
    printf("a=%d b=%d\n",a,b);
    return 0;
}