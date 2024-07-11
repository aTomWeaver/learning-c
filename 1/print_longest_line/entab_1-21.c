#include <stdio.h>

#define TABSTOPS 4

int nexttab(int current, int tabstops);

int main()
{
    int c, tabs, spaces;

    tabs = spaces = 0;
    while ((c = getchar()) > 0 && c != '\n') {
        if (c == ' ') {
            ++spaces;
        } else {
            tabs = spaces / TABSTOPS;
            spaces = spaces % TABSTOPS;
            for (; tabs > 0; --tabs) {
                putchar('\t');
            }
            for (; spaces > 0; --spaces) {
                putchar(' ');
            }
            putchar(c);
        }
    }
    return 0;
}
