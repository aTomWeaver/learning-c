#include <stdio.h>

#define MAXLINE 1000


/* Only modifying the for-loop in getLine for this excercise! */



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
    while (printf(">> ") && (len = getLine(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {  // if line doesn't end on \n, run out the rest of line
            while (getchar() != '\n')
                ;
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        printf("Length: %d\nText: %s\n", len, line);
    }
    if (max > 0) {          /* there was a line */
        printf("\nLongest line: \"%s\"\n", longest);
    }

    return 0;
}

int getLine(char line[], int maxline)
{
    int c, i;

    /* for (until we hit either the limit, end of file, or newline character) */
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    /* if we ended the for loop above on a newline, copy it into line */
    /* (Steve Summit calls this clumsy because we have to check for '\n' again.) */
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    /* add the end-of-string NULL character to s */
    line[i] = '\0';
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
