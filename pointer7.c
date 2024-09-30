#include <stdio.h>

int main()
{
    int *intPtr;
    float *floatPtr;
    double *doublePtr;
    printf("Size of integer pointer: %zu bytes\n", sizeof(intPtr));
    printf("Size of float pointer: %zu bytes\n", sizeof(floatPtr));
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
    return 0;
}
