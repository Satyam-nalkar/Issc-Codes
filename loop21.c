#include <stdio.h>

int main() {
    int x, y;
    printf("Enter Base: ");
    scanf("%d", &x);
    printf("Enter Exponent: ");
    scanf("%d", &y);

    int result = 1; 
    for (int i = 0; i < y; i++) {
        result *= x; 
    }
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}
