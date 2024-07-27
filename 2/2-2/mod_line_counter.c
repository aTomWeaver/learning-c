#include <stdio.h>

#define MAXLINE 1000


/* Only modifying the for-loop in getLine for this excercise! */


int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while (printf(">> ") && (len = getLine(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {
            while (getchar() != '\n')
                ;
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        printf("Length: %d\nText: %s\n", len, line);
    }
    if (max > 0) {
        printf("\nLongest line: \"%s\"\n", longest);
    }

    return 0;
}

int getLine(char line[], int maxline)
{
    int c, i;


    /* This is the modified for loop for the excercise. */
    /*******/
    for (i = 0; i < maxline - 1; ++i) {
        if ((c = getchar()) != EOF)) {
            if (c != '\n') {
                line[i] = c;
            }
        }
    }
    /*******/

    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
