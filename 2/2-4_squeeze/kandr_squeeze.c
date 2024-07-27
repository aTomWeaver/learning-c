#include <stdio.h>

void squeeze(char s[], int c);

int main(int argc, char** argv)
{
    // handle args
    if (argc < 3) {
        printf("Insufficient arguments given.\n");
        return 1;
    } else if (argc > 3) {
        printf("Too many arguments given.\n");
        return 1;
    }

    char* string = argv[1];
    char c = *(argv[2]);
    squeeze(string, c);
    printf("%s\n", string);

    return 0;
}

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
