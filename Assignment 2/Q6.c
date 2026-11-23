#include <stdio.h>

int main()
{
    int n, d1, d2, d3, d4, d5, rev;

    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    d1 = n % 10; n = n / 10;
    d2 = n % 10; n = n / 10;
    d3 = n % 10; n = n / 10;
    d4 = n % 10; n = n / 10;
    d5 = n % 10;

    rev = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("Reversed number = %d\n", rev);

    return 0;
}


