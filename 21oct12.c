#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int n = 5;
    int temp=a[0];
    for ( i = 0; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    printf("array after left rotation:\n");
    for ( i = 0; i < n; i++)
    {
      printf("%d\n",a[i]);
     // printf("\n");
    }
    
    


}