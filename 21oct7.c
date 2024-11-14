#include<stdio.h>
int main()
{
   int n,i;
   int largest;
   int smallest;
   printf("Enter the number of element in the array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d element:\n",n);
   for ( i = 0; i < n; i++)
   {
     scanf("%d",&a[i]);
   }
   largest=a[0];
   for ( i = 1; i < n; i++)
   {
    if (a[i]>largest)
       largest = a[i];
     else if(a[i]<largest)
             smallest=a[i];

   }
   printf("the largest element in the array is:%d  smallest is %d\n",largest,smallest);
   return 0;

}