#include <stdio.h>

long long factorial(int n);

/*
 * Program: Find factorial.
 */
int main()
{
    int n;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);
    printf("Factorial of %d = %lld\n", n, result);

    return 0;
}

long long factorial(int n)
{
    long long result;
    int i;

    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
