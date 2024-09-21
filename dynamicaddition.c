#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, i, j, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int **a = (int **)malloc(r * sizeof(int *));
    int **b = (int **)malloc(r * sizeof(int *));
    if (a == NULL || b == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
        b[i] = (int *)malloc(c * sizeof(int));
        if (a[i] == NULL || b[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    printf("Enter elements for matrix A:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for matrix B:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    printf("Difference of matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
     printf("multiplicaton of matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j] * b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        free(a[i]);
        free(b[i]);
    }
    free(a);
    free(b);

    return 0;
}
