#include <stdio.h>

/*
 * Program: WAP to format console output using '\n', '\t', '\b', '\'', '\\', '\"', '\r', '\a' within printf statement.
 */
int main()
{
    printf("New line: first line\nsecond line\n");
    printf("Tab:\tafter tab\n");
    printf("Backspace: ABC\bD\n");
    printf("Single quote: \'hello\'\n");
    printf("Backslash: C:\\folder\n");
    printf("Double quote: \"hello\"\n");
    printf("Carriage return: XXXXX\rYY\n");
    printf("Alert (beep):\a\n");

    return 0;
}
