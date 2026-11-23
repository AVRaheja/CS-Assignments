#include <stdio.h>

/*
 * Program: WAP using loop - Range of set of entered nos. by finding smallest and largest
 */
int main()
{
    int n;
    int i;
    int x;
    int small;
    int large;
    int range;

    printf("How many numbers? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &x);

        if (i == 1)
        {
            small = x;
            large = x;
        }
        else
        {
            if (x < small)
            {
                small = x;
            }
            if (x > large)
            {
                large = x;
            }
        }
    }

    range = large - small;

    printf("Smallest number: %d\n", small);
    printf("Largest number: %d\n", large);
    printf("Range: %d\n", range);
    return 0;
}
