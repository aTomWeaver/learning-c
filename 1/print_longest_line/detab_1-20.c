#include <stdio.h>

#define TABSTOPS    8

int nexttab(int current, int tabstops);

/* replace all instances of '\t' with proper number of
 * spaces to next tab stop */
int main()
{
    int i, c, nt, j;
    i = 0;
    while ((c = getchar()) > 0 && c != '\n') {
        if (c == '\t') {
            nt = nexttab(i, TABSTOPS);
            while (i < nt) {
                putchar(' ');
                ++i;
            }
        } else {
            putchar(c);
            ++i;
        }
    }

    /* print the ruler below the line */
    putchar('\n');
    for (j = 0; j <= i; j++) {
        if (j % TABSTOPS == 0) {
            putchar('|');
        } else {
            putchar('.');
        }
    }
    return 0;
}

/* find the next tab stop */
int nexttab(int current, int tabstops) {
    int n = 0;
    while (n <= current)
        n = n + tabstops;
    return n;
}
