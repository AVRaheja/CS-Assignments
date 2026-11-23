#include <stdio.h>

long long factorial(int n);
int fib(int n);
int sum(int n);

/*
 * Program: Learn recursion from the lab instructor and implement (a) factorial of a number (b) Fibonacci series (c) Summation of n
 */
int main()
{
    int n;
    int terms;
    int i;

    printf("(a) Factorial\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n\n", n, factorial(n));

    printf("(b) Fibonacci series\n");
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    for (i = 0; i < terms; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n\n");

    printf("(c) Summation of n\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of 1 to %d = %d\n", n, sum(n));

    return 0;
}

long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int sum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
