#include <stdio.h>

void swapWithTemp(int *a, int *b);
void swapWithoutTemp(int *a, int *b);

/*
 * Program: WAP to swap two variables using with and without a temp variable.
 */
int main()
{
    int x;
    int y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    swapWithTemp(&x, &y);
    printf("After swap with temp: x = %d, y = %d\n", x, y);

    swapWithoutTemp(&x, &y);
    printf("After swap without temp: x = %d, y = %d\n", x, y);

    return 0;
}


void swapWithTemp(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutTemp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
