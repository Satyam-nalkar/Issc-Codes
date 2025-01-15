#include<stdio.h>
int main()
{
    int i, n, flag = 1; // Flag is initialized to 1 (assuming prime initially)

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1) {
        // Numbers less than or equal to 1 are not prime
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Check divisors from 2 to n/2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0; // Not prime
            break;
        }
    }
 
    if (flag == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
