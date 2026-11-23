#include <stdio.h>

/*
 * Program: WAP using loop - HCF of two numbers
 */
int main()
{
    int a;
    int b;
    int smaller;
    int i;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a < b)
    {
        smaller = a;
    }
    else
    {
        smaller = b;
    }

    i = smaller;
    while (a % i != 0 || b % i != 0)
    {
        i--;
    }

    printf("HCF of %d and %d is %d\n", a, b, i);
    return 0;
}
