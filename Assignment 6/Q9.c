#include <stdio.h>

/*
 * Program: WAP using loop - Generate Fibonacci series
 */
int main()
{
    int n;
    int i;
    int first;
    int second;
    int third;

    printf("How many terms? ");
    scanf("%d", &n);

    first = 0;
    second = 1;

    printf("Fibonacci series:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        third = first + second;
        first = second;
        second = third;
    }

    printf("\n");
    return 0;
}
