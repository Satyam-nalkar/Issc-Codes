#include<stdio.h>
int main()
{ 
   int i;
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   for ( i = 2; i < n; i++)
   {
      if(n%i==0)
      {
        printf("is prime");
      }
      else{
        printf("not prime");
      }
   }
   
  return 0;
}