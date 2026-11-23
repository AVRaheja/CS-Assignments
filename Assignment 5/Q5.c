#include <stdio.h>

/*
 * Program: A certain grade of steel is graded according to the following conditions: (i) Hardness must be greater than 50 (ii) Carbon content must be less than 0.7 (iii) Tensile strength must be greater than 5600. Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. (Solve using nested if-else, ladder if and else if)
 */
int main()
{
    float hardness, carbon, tensile;
    int grade1, grade2;

    printf("Enter hardness: ");
    scanf("%f", &hardness);
    printf("Enter carbon content: ");
    scanf("%f", &carbon);
    printf("Enter tensile strength: ");
    scanf("%f", &tensile);

    if (hardness > 50)
    {
        if (carbon < 0.7)
        {
            if (tensile > 5600)
                grade1 = 10;
            else
                grade1 = 9;
        }
        else
        {
            if (tensile > 5600)
                grade1 = 7;
            else
                grade1 = 6;
        }
    }
    else
    {
        if (carbon < 0.7)
        {
            if (tensile > 5600)
                grade1 = 8;
            else
                grade1 = 6;
        }
        else
        {
            if (tensile > 5600)
                grade1 = 6;
            else
                grade1 = 5;
        }
    }

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
        grade2 = 10;
    else if (hardness > 50 && carbon < 0.7)
        grade2 = 9;
    else if (carbon < 0.7 && tensile > 5600)
        grade2 = 8;
    else if (hardness > 50 && tensile > 5600)
        grade2 = 7;
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
        grade2 = 6;
    else
        grade2 = 5;

    printf("Grade (Method 1, nested if-else): %d\n", grade1);
    printf("Grade (Method 2, ladder if-else if): %d\n", grade2);

    return 0;
}
