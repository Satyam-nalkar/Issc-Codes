#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter the number of element");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the value:\n");
    for(i=0;i<n;i++)   
    {
     scanf("%d",(ptr+i));
    }
    printf("the entered value are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}