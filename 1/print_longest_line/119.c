#include <stdio.h>

#define MAXLENGTH   100

int getLine(char line[], int maxline);
void reverseLine(char forwardLine[], char backwardLine[], int len);
void clearLine(char line[], int len);

int main()
{
    int len;
    char line[MAXLENGTH];
    char reversed[MAXLENGTH];

    /* while ((len = getLine(line, MAXLENGTH) > 0) reverseLine(line) */
    while ((len = getLine(line, MAXLENGTH)) > 0) {
        reverseLine(line, reversed, len);
        printf("\"%s\"\n", reversed);
        clearLine(line, len);
        clearLine(reversed, len);
    }

    return 0;
}

int getLine(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline && (c = getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
    }
    line[i] = '\0';
    return i;
}

void reverseLine(char forwardLine[], char backwardLine[], int len)
{
    int i;
    for (i = 0; i < len; ++i) {
        backwardLine[i] = forwardLine[(len - 1) - i];
    }
}

void clearLine(char line[], int len)
{
    int i;
    for (i = 0; i < len; ++i) {
        line[i] = '\0';
    }
}
