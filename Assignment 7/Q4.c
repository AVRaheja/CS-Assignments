#include <stdio.h>

#define SIZE 100

/*
 * Program: Write a program to delete a given element in an array.
 */
int main()
{
    int a[SIZE];
    int n;
    int i;
    int value;
    int pos;
    int found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &value);

    found = 0;
    pos = 0;
    for (i = 0; i < n && found == 0; i++)
    {
        if (a[i] == value)
        {
            found = 1;
            pos = i;
        }
    }

    if (found == 0)
    {
        printf("Element %d not found in the array.\n", value);
    }
    else
    {
        for (i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
