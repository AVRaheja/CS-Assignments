#include <stdio.h>
#include <string.h>

/*
 * Program: WAP to concatenate two strings
 */
int main()
{
    char s1[200];
    char s2[100];

    printf("Enter first word: ");
    scanf("%s", s1);

    printf("Enter second word: ");
    scanf("%s", s2);

    strcat(s1, s2);

    printf("Concatenated string: %s\n", s1);

    return 0;
}
