#include <stdio.h>

/*
 * Program: WAP to shift left and shift right operators (>> and <<). Ask the application of this operator to your lab instructor.
 */
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("n << 1 = %d\n", n << 1);
    printf("n << 2 = %d\n", n << 2);
    printf("n >> 1 = %d\n", n >> 1);
    printf("n >> 2 = %d\n", n >> 2);

    return 0;
}
