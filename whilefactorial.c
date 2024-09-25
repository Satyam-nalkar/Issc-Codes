#include <stdio.h>
int main() 
{
    int n, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n<0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; 
    }
       int i = n;
       while (i > 0) 
       {
        factorial *= i;
        i--;
       }
        printf("Factorial of %d is %d\n", n, factorial);
        return 0; 
}
