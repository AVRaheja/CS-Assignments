#include <stdio.h>

#define SIZE 100

/*
 * Program: Write a program for linear search for element.
 */
int main()
{
    int a[SIZE];
    int n;
    int i;
    int key;
    int pos;
    int found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    found = 0;
    pos = 0;
    for (i = 0; i < n && found == 0; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            pos = i + 1;
        }
    }

    if (found == 1)
    {
        printf("Element %d found at position %d\n", key, pos);
    }
    else
    {
        printf("Element %d not found\n", key);
    }

    return 0;
}
