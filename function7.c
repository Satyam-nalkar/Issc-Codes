#include <stdio.h>
void printSum(int a, int b, int c);
int main() 
  {
        int a = 3;
        int b = 5;
        int c = a*b;
        printSum(a, b, c);
        return 0;
  }
void printSum(int a, int b, int c) 
    {
        printf("The multiplication  is %d\n",c);
    }
