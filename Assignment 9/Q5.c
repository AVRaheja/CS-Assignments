#include <stdio.h>

int isPrime(int n);

/*
 * Program: Display first n prime numbers.
 */
int main()
{
    int n;
    int count;
    int num;

    printf("How many prime numbers? ");
    scanf("%d", &n);

    count = 0;
    num = 2;

    while (count < n)
    {
        if (isPrime(num))
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

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
