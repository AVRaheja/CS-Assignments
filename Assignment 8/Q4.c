#include <stdio.h>
#include <string.h>

/*
 * Program: WAP to compare two strings.
 */
int main()
{
    char s1[100];
    char s2[100];
    int result;

    printf("Enter first word: ");
    scanf("%s", s1);

    printf("Enter second word: ");
    scanf("%s", s2);

    result = strcmp(s1, s2);

    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else if (result < 0)
    {
        printf("First string is smaller\n");
    }
    else
    {
        printf("First string is greater\n");
    }

    return 0;
}
