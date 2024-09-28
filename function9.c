#include<stdio.h>
void subtraction(int a, int b ,int c);
int main()
{
   int a, b,c;
   printf("Enter two Numbers");
   scanf("%d %d",&a,&b);
   c= a-b;
   subtraction(a,b,c);
   return 0;
}
 void subtraction(int a, int b ,int c)
{
   printf("the subtraction is :%d\n",c);
}