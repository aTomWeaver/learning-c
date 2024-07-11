#include <stdio.h>

#define TRUE    1
#define FALSE   0

/* print one word per line */
int main() {
    int c, last_char_blank;

    last_char_blank = FALSE;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (last_char_blank == FALSE) {
                putchar('\n');
                last_char_blank = TRUE;
            }
        } else {
            putchar(c);
            last_char_blank = FALSE;
        }
    }
    return 0;
}
