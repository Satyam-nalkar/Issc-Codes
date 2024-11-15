#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter 10 integer\n");
    for ( i = 0; i < 10; i++)
    {
    scanf("%d",&a[i]);    
    if (a[i]<0)
    printf("negative integer %d ",i);
    else
    printf("positive integers %d ",i);
    }
    return 0;
}