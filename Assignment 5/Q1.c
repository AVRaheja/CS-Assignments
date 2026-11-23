#include <stdio.h>

/*
 * Program: To implement calculator (+, -, /, *, %) using switch statement
 */
int main()
{
    int a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("Result: %.2f\n", (float)a / b);
            break;
        case '%':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("Result: %d\n", a % b);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
