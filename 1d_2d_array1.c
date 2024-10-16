#include<stdio.h>
int main()
{
   int i,a[5];
   printf("Enter five elment\n"); 
   for ( i = 0; i < 5; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("You entered this number\n");
   for ( i = 0; i < 5; i++)
   {
      printf("%d\n",a[i]);
   }
    return 0;
}