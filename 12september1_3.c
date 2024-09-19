#include<stdio.h>
#include <stdlib.h>
int main()
{
      int i,n;
      printf("enter the number of element\n");
      scanf("%d",&n);
      int *a=(int*)malloc(n*sizeof(int));
      printf("enter the value:\n");
      
      for(i=0;i<n;i++)   
      {
        scanf("%d",&a[i]);
      }
      printf("The value are:\n");
        for(i=0;i<n;i++)   
      {
        printf("%d\t",a[i]);
      }
        
        free(a);
        return 0;
}