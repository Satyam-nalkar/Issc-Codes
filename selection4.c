#include<stdio.h>
int main()
{
    int a[100]; 
    int i,j,n,temp,array, min;  //declaire the variable
    printf("Enter No of elemnts in array");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }
       for(i=0;i<n-1;i++)
      {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }    
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
      }
     printf("sorted array\n");
     for(i=0;i<n;i++)
        {
          printf("%d\n",a[i]);
        }
    return 0;
}