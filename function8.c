#include <stdio.h>
void divrem(int a, int b);
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    divrem(a, b);  
    return 0;    
}
void divrem(int a, int b) 
{
    if (b != 0) 
    {
        printf("Quotient: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else 
    {
        printf("b is 0, not allowed\n");
    }
}
