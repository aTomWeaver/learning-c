#include <stdio.h>

#define MAXLINE 1000
#define PROMPT  printf(">> ")

int getLine(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];
    
    while (PROMPT && (len = getLine(line, MAXLINE)) > 0)
        /* print line if line > 80 chars */
        if (len > 80) {
            printf("\n<< %s\n", line);
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

