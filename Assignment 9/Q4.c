#include <stdio.h>

int isPrime(int n);

/*
 * Program: If a number is prime or not.
 */
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}

int isPrime(int n)
{
    int i;

    if (n <= 1)
    {
        return 0;
    }

    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
