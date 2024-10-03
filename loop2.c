#include <stdio.h>

int main() 
{
    int numbers[10];
    int sum = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            sum += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
