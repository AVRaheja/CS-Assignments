#include <stdio.h>

/*
 * Program: WAP to utilize ternary operator (?:). (For example: To find whether the given number is odd or even)
 */
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d is Even\n", n) : printf("%d is Odd\n", n);

    return 0;
}
