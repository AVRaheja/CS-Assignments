#include <stdio.h>

/*
 * Program: WAP using loop - Factorial of number
 */
int main()
{
    int n;
    int i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %lld\n", n, fact);
    return 0;
}
