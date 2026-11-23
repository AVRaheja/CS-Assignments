#include <stdio.h>

/*
 * Program: WAP using loop - GCD of two numbers
 */
int main()
{
    int a;
    int b;
    int r;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    do
    {
        r = a % b;
        a = b;
        b = r;
    } while (b != 0);

    printf("GCD is %d\n", a);
    return 0;
}
