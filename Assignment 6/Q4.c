#include <stdio.h>

/*
 * Program: WAP using loop - Armstrong numbers between 1 to 500
 */
int main()
{
    int num;
    int temp;
    int digits;
    int sum;
    int digit;
    int power;
    int j;

    printf("Armstrong numbers from 1 to 500:\n");

    for (num = 1; num <= 500; num++)
    {
        temp = num;
        digits = 0;
        while (temp > 0)
        {
            temp = temp / 10;
            digits++;
        }

        temp = num;
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;

            power = 1;
            for (j = 0; j < digits; j++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
