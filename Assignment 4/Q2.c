#include <stdio.h>

/*
 * Program: WAP to divide two numbers and use type casting operation (e.g. mean = (double)sum/n;).
 */
int main()
{
    int sum, n;

    printf("Enter sum: ");
    scanf("%d", &sum);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Without cast: %d / %d = %d\n", sum, n, sum / n);

    printf("With cast: (double)%d / %d = %.2f\n", sum, n, (double)sum / n);

    return 0;
}
