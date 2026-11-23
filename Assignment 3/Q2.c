#include <stdio.h>
#include <math.h>

/*
 * Program: WAP to find roots of a quadratic equation (for D>=0 case).
 */
int main()
{
    double a, b, c, d, root1, root2;

    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    d = b * b - 4 * a * c;

    if (d < 0)
    {
        printf("Roots are imaginary (D < 0 not handled)\n");
    }
    else
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    }

    return 0;
}
