#include <stdio.h>

#define SIZE 100

/*
 * Program: Write a program to insert an element at a given location of an array
 */
int main()
{
    int a[SIZE];
    int n;
    int i;
    int value;
    int pos;
    int idx;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    idx = pos - 1;

    for (i = n; i > idx; i--)
    {
        a[i] = a[i - 1];
    }

    a[idx] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
