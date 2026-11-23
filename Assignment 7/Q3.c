#include <stdio.h>

#define SIZE 100

/*
 * Program: Write a program to copy one array to another array.
 */
int main()
{
    int a[SIZE];
    int b[SIZE];
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    printf("Array a: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Array b (copy of a): ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
