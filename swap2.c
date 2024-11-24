#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers:a=%d",a);
    printf("Enter two integers:b=%d\n",b);
    scanf("%d %d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
