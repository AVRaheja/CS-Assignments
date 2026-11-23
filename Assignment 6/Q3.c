#include <stdio.h>

/*
 * Program: WAP using loop - X raised to power n
 */
int main()
{
    float x;
    float result;
    int n;
    int i;

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter n (0 or more): ");
    scanf("%d", &n);

    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%.2f raised to the power %d is %.2f\n", x, n, result);
    return 0;
}
