#include <stdio.h>

int main()
{
    int c;
    char escapes[3];

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
        } else {
            putchar(c);
        }
    }
    return 0;
}
