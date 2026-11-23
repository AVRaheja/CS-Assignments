#include <stdio.h>
#include <stdlib.h>

/*
 * Program: String is set of characters (one next to each other stored in the memory and not related to each other), e.g., ="abc123". WAP to practice type casting using the following functions: atof(), atoi(), atol(), itoa(), ltoa().
 */
int main()
{
    char *s = "3.145";
    char *s2 = "123";
    char *s3 = "1234567";
    float f;
    int i;
    long l;
    int n;
    long big;
    char buf1[20], buf2[20];

    f = atof(s);
    i = atoi(s2);
    l = atol(s3);

    printf("atof(\"%s\") gives float: %f\n", s, f);
    printf("atoi(\"%s\") gives int: %d\n", s2, i);
    printf("atol(\"%s\") gives long: %ld\n", s3, l);

    n = 456;
    big = 9876543L;

    itoa(n, buf1, 10);
    ltoa(big, buf2, 10);

    printf("itoa(%d) gives string: %s\n", n, buf1);
    printf("ltoa(%ld) gives string: %s\n", big, buf2);

    return 0;
}
