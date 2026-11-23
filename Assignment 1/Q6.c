#include <stdio.h>

int main()
{
    float basic, da, ta, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.10 * basic;
    ta = 0.12 * basic;
    gross_salary = basic + da + ta;

    printf("DA = %f\n", da);
    printf("TA = %f\n", ta);
    printf("Gross salary = %f\n", gross_salary);

    return 0;
}


