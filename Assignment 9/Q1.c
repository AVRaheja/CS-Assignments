#include <stdio.h>

void greet(void);
int add(int a, int b);
float average(float a, float b);
char getGrade(int marks);

/*
 * Program: Learn the meaning and application of function prototype, function call and function definition. Practice various return types such as void, int, float, char etc. using small programs.
 */
int main()
{
    int sum;
    float avg;
    char grade;

    greet();

    sum = add(5, 3);
    printf("Sum of 5 and 3 = %d\n", sum);

    avg = average(7.5, 8.5);
    printf("Average of 7.5 and 8.5 = %.2f\n", avg);

    grade = getGrade(85);
    printf("Grade for 85 marks = %c\n", grade);

    return 0;
}

void greet(void)
{
    printf("Welcome to the C lab!\n");
}

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

float average(float a, float b)
{
    float result;
    result = (a + b) / 2.0;
    return result;
}

char getGrade(int marks)
{
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 75)
    {
        return 'B';
    }
    else if (marks >= 50)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}
