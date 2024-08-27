#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    switch(a)
    {
        case 10:
        case 20:
        case 30:
        printf("a%d\n",a/2);
        break;
        case 40:
        case 50:
        printf("a%d\n",a/3);
        break;
        default:
        printf("a%d\n",a/4);
    }
    return 0;

}