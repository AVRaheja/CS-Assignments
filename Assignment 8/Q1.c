#include <stdio.h>
#include <string.h>

/*
 * Program: WAP to copy one string to another string with and without using string handling function.
 */
int main()
{
    char s1[100];
    char s2[100];
    char s3[100];
    int i;

    printf("Enter a word: ");
    scanf("%s", s1);

    strcpy(s2, s1);
    printf("Copy using strcpy: %s\n", s2);

    i = 0;
    while (s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
    }
    s3[i] = '\0';
    printf("Copy using loop: %s\n", s3);

    return 0;
}
