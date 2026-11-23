#include <stdio.h>

int main()
{
    int c, d;

    printf("Enter value of c: ");
    scanf("%d", &c);
    printf("Enter value of d: ");
    scanf("%d", &d);

    printf("Before swap: c = %d, d = %d\n", c, d);

    c = c + d;
    d = c - d;
    c = c - d;

    printf("After swap:  c = %d, d = %d\n", c, d);

    return 0;
}


