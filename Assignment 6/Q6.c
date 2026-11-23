#include <stdio.h>

/*
 * Program: WAP using loop - Multiplication table
 */
int main()
{
    int n;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}
