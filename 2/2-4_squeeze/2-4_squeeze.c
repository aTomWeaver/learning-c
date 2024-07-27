#include <stdio.h>

void squeeze(char s1[], char s2[]);

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
    char* c = argv[2];

    squeeze(string, c);
    printf("%s\n", string);

    return 0;
}

/* removes all characters in s2 from s1 */
void squeeze(char s1[], char s2[])
{
    int nc, c, i, j;

    for (nc = 0; s2[nc] != '\0'; nc++) {
        c = s2[nc];
        for (i = j = 0; s1[i] != '\0'; i++) {
            if (s1[i] != c) {
                s1[j++] = s1[i];
            }
        }
        s1[j] = '\0';
    }
}
