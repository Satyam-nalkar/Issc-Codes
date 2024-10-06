#include <stdio.h>
void printSum(int a, int b, int c, int d);
int main() 
{
    int a, b, c,d;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b ,&c);
    d = a*b*c; 
    printSum(a, b, c,d);
    return 0;
}
      void printSum(int a, int b, int c, int d) 
    {
        printf("The multiplication is %d:\n",d );
    }
