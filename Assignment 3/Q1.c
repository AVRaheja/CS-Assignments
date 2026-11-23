#include <stdio.h>
#include <math.h>

#define PI 3.14159

/*
 * Program: WAP to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc. by including <math.h> header file.
 */
int main()
{
    double angle, rad, x, base, exponent;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);
    rad = angle * PI / 180;
    printf("sin(%f) = %f\n", angle, sin(rad));
    printf("cos(%f) = %f\n", angle, cos(rad));

    printf("Enter a positive number x: ");
    scanf("%lf", &x);
    printf("log(x)   = %f\n", log(x));
    printf("log10(x) = %f\n", log10(x));
    printf("sqrt(x)  = %f\n", sqrt(x));
    printf("fabs(-x) = %f\n", fabs(-x));
    printf("ceil(x)  = %f\n", ceil(x));
    printf("floor(x) = %f\n", floor(x));

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    printf("pow(base, exponent) = %f\n", pow(base, exponent));

    return 0;
}
