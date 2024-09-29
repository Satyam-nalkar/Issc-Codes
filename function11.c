#include <stdio.h>
void printFibonacci(int n); 
int main() 
{
    int terms;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &terms);
    printFibonacci(terms);
    return 0;
}
   void printFibonacci(int n)
   {
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) 
    {
        if (i <= 1) 
        {
            c = i; 
        } else 
        {
            c = a+b; 
            a = b;
            b = c; 
        }
        printf("%d ",c);
    }
    printf("\n");
   }
