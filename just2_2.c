#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("it is a even number\n");
    }
    else if(a%2!=0)
    {
        printf("it is odd number\n");
    }
    else
    {
        printf("it is neither even nor odd number\n");
    }
    return 0;
}
