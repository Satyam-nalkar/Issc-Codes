#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i = 0; i <= n; i+=3)
    {
        printf("%d\n",i);
    }
    return 0;
}