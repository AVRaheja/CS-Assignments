#include <stdio.h>

/*
 * Program: WAP using loop - Whether no. is prime or not
 */
int main()
{
    int n;
    int i;
    int flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    flag = 1;
    if (n <= 1)
    {
        flag = 0;
    }

    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
