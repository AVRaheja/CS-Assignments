#include <stdio.h>

void fibonacci(int n);

/*
 * Program: Fibonacci series of n numbers
 */
int main()
{
    int n;

    printf("How many terms? ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

void fibonacci(int n)
{
    int a;
    int b;
    int next;
    int i;

    a = 0;
    b = 1;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
