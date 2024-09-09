#include<stdio.h>
int main()
{
    int i;
    do
    {
       printf("Enter the element:");
       scanf("%d",&i);
    } while (i!=111);
    printf("you entered:111\n");
    printf("Program terminated:\n");
    return 0;
}