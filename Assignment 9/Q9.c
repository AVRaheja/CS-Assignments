#include <stdio.h>

int sumOfDigits(int n);

/*
 * Program: Add digits of an integer.
 */
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits of %d = %d\n", n, sumOfDigits(n));

    return 0;
}

int sumOfDigits(int n)
{
    int sum;
    int digit;

    if (n < 0)
    {
        n = -n;
    }

    sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
