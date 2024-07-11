#include <stdio.h>

int main()
{
    int c, len, i, j;
    int lens[20];

    for (i = 0; i < 20; i++)
        lens[i] = 0;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (len < 20)
                ++lens[len];
            len = 0;
        } else {
            ++len;
        }
    }
    for (i = 1; i < 20; i++) {              // starting at 1 because we don't care about 0-letter words
        printf("%3d: ", i);
        for (j = 0; j < lens[i]; j++) {
            putchar('#');
        }
        putchar('\n');
    }
    return 0;
}
