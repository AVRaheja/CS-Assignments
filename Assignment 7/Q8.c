#include <stdio.h>

#define MAX 10

/*
 * Program: Write a program to add, transpose of a matrix
 */
int main()
{
    int a[MAX][MAX];
    int b[MAX][MAX];
    int c[MAX][MAX];
    int t[MAX][MAX];
    int r;
    int cols;
    int i;
    int j;

    printf("Enter number of rows (max 10): ");
    scanf("%d", &r);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);

    printf("Enter matrix A:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum matrix C = A + B:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < cols; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of A:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
