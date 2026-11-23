#include <stdio.h>

/*
 * Program: To find greatest of 3 integers using two methods (a) if-else and (b) ternary operator.
 */
int main()
{
    int a, b, c;
    int max1, max2;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Method (a) if-else:\n");
    if (a > b && a > c)
        max1 = a;
    else if (b > c)
        max1 = b;
    else
        max1 = c;
    printf("Greatest number: %d\n", max1);

    printf("Method (b) ternary operator:\n");
    max2 = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Greatest number: %d\n", max2);

    return 0;
}
