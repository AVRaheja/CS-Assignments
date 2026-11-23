#include <stdio.h>

#define SIZE 100

/*
 * Program: Write a program to find sum and average of array elements
 */
int main()
{
    int a[SIZE];
    int n;
    int i;
    int sum;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
