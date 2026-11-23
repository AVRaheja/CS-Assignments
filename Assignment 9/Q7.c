#include <stdio.h>

int hcf(int a, int b);
int lcm(int a, int b);

/*
 * Program: LCM of two numbers
 */
int main()
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("LCM of %d and %d = %d\n", a, b, lcm(a, b));

    return 0;
}

int hcf(int a, int b)
{
    int r;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    int result;

    result = (a * b) / hcf(a, b);
    return result;
}
