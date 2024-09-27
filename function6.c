#include<stdio.h>
void printHello(int a,int b,int c);
int main()
{
 int a=7;
 int b=8;
 int c=a+b;
 printHello(a,b,c);
}
 void printHello(int a,int b,int c)
{
  printf("sum of a & b is %d",c);
}
