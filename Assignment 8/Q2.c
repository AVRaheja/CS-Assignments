#include <stdio.h>

/*
 * Program: WAP for the following pattern:
 *
 * U N
 * U N I V
 * U N I V E R
 * U N I V E R S I
 * U N I V E R S I T Y
 * U N I V E R S I
 * U N I V E R
 * U N I V
 * U N
 */
int main()
{
    char s[] = "UNIVERSITY";
    int len;
    int i;

    for (len = 2; len <= 10; len += 2)
    {
        for (i = 0; i < len; i++)
        {
            printf("%c ", s[i]);
        }
        printf("\n");
    }

    for (len = 8; len >= 2; len -= 2)
    {
        for (i = 0; i < len; i++)
        {
            printf("%c ", s[i]);
        }
        printf("\n");
    }

    return 0;
}
