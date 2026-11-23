#include <stdio.h>

/*
 * Program: Count vowels in a given string.
 */
int main()
{
    char s[200];
    int count;
    int i;

    printf("Enter a line of text: ");
    fgets(s, sizeof(s), stdin);

    count = 0;
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
        i++;
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
