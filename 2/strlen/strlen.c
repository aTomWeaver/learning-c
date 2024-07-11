#include <stdio.h>

int strLen(const char str[]);

int main()
{
    char string[] = "This is a string.";
    printf("%d\n", strLen(string));

    return 0;
}

int strLen(const char str[])
{
    int i;

    i = 0;
    while(str[i] != '\0') {
        ++i;
    }
    return i;
}
