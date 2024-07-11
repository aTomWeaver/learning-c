#include <stdio.h>

#define MAXLINE 100
#define NONE    -1      /* signal for no index in array not containing whitespace */

int getLine(char line[], int maxline);

int main()
{
    int i, len;
    char line[MAXLINE];
    int last_non_ws;        /* Index of last non-whitespace char in line */

    while ((len = getLine(line, MAXLINE)) > 0) {
        last_non_ws = NONE;
        for (i = 0; i < len; ++i) {
            if (line[i] != '\t' && line[i] != ' ' && line[i] != '\n') {
                last_non_ws = i;
            }
        }
        for (i = 0; i < len; ++i) {
            if (i > last_non_ws) {
                line[i] = '\0';
            } else if (line[i] != '\0') {
                putchar(line[i]);
            }
        }
        if (last_non_ws != -1) {
            putchar('\n');
        }
    }
    return 0;
}

int getLine(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline && (c = getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// while (/* getting a line */) {
//     int last_non_ws;  /* index of last non-whitespace char */
//     for (/* each char in line */) {
//         if (/* char is not whitespace */) {
//             last_non_ws = char;
//         }
//     }
//     for (/* chars in line up to last index */)
//         putchar(/* char */)
// }
