#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {          /* there was a line */
        printf("\nLongest line: \"%s\"\n", longest);
    }

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    /* for (until we hit either the limit, end of file, or newline character) */
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    /* if we ended the for loop above on a newline, copy it into s */
    /* (Steve Summit calls this clumsy because we have to check for '\n' again.) */
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    /* add the end-of-string NULL character to s */
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    /* copy from "from" into "to" up to and including the '\0' */
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
