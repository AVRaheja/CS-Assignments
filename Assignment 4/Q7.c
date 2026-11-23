#include <stdio.h>

/*
 * Program: To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else (ii) ternary operator
 */
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Method (i) if-else:\n");
    if (n % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    if (n > 0)
        printf("Positive number\n");
    else if (n < 0)
        printf("Negative number\n");
    else
        printf("Zero\n");

    printf("Method (ii) ternary operator:\n");
    printf("%s\n", (n % 2 == 0) ? "Even number" : "Odd number");
    printf("%s\n", n > 0 ? "Positive number" : (n < 0 ? "Negative number" : "Zero"));

    return 0;
}
