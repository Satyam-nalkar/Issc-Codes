#include <stdio.h>
void fibonacci(int n)
 {
    unsigned long long a = 0, b = 1, c;
    if (n < 0) 
    {
        printf("Fibonacci sequence is not defined for negative numbers.\n");
        return;
    }
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (i == 0) 
        {
            printf("%llu ", a);
        } else if (i == 1) 
        {
            printf("%llu ", b);
        } else {
            c = a + b;
            a = b;
            b = c;
            printf("%llu ", c);
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}
