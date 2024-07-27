#include <stdio.h>

void lower(char s[]);

int main(int argc, char** argv)
{
    // handle args
    if (argc < 2) {
        printf("Insufficient arguments given.\n");
        return 1;
    } else if (argc > 2) {
        printf("Too many arguments given.\n");
        return 1;
    }
    char* s = argv[1];
    lower(s);
    printf("%s\n", s);

    return 0;
}

/* For letters in string, if letter is capitalized, make it
 * lowercase. */
void lower(char s[])
{
    int i;
    
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = ((s[i] >= 'A') && (s[i] <= 'Z')) ? s[i] + 32 : s[i];
    }
}
