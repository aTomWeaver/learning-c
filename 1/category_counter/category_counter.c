#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;   // getchar val, index, whitespace, other chars
    int ndigit[10];             // digits 0-9

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')   // c is ASCII code between or equal to 0 and 9.
            ++ndigit[c-'0'];        // subtract val for '0' to get int value rather than ASCII value
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
            nwhite, nother);
    return 0;
}
