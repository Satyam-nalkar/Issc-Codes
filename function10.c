#include<stdio.h>
 void factorial(int fact,int i,int n);
 int main()
 {
    int n,fact,i;
    printf("Enter the number:");
    scanf("%d",&n);
    fact =1;
    for(i=n;i>=2;i--)
    fact=fact*i;
    factorial(fact,i,n);

    return 0;
 } 
   void factorial(int fact,int i,int n)
 {
   printf("factorial is %d\n",fact);
 }