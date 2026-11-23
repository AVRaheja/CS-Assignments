#include <stdio.h>

int main()
{
    int c, d, temp;

    printf("Enter value of c: ");
    scanf("%d", &c);
    printf("Enter value of d: ");
    scanf("%d", &d);

    printf("Before swap: c = %d, d = %d\n", c, d);

    temp = c;
    c = d;
    d = temp;

    printf("After swap:  c = %d, d = %d\n", c, d);

    return 0;
}


