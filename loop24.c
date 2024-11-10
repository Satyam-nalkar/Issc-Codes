#include <stdio.h>
#include <math.h>

int main() {
    double numbers[10];
    double sum = 0.0, mean, variance = 0.0, stddev;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    mean = sum / 10;
    for (int i = 0; i < 10; i++) {
        variance += (numbers[i] - mean) * (numbers[i] - mean);
    }
    variance /= 10;

    stddev = sqrt(variance);
    printf("Mean = %.2lf\n", mean);
    printf("Standard Deviation = %.2lf\n", stddev);

    return 0;
}
