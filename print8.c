#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, r1, r2;
    printf("Enter the values of a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
        double d = b * b - 4 * a * c;
    printf(" d: %lf\n", d);
        if (d < 0) 
         {
            printf("The equation has no real roots.\n");
         }
        else
         {
        r1 = (-b - sqrt(d)) / (2 * a);
        r2 = (-b + sqrt(d)) / (2 * a);
        printf("The real root 1 = %lf\n", r1);
        printf("The real root 2 = %lf\n", r2);
    }

    return 0;
}
