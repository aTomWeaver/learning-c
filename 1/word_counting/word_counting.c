#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;                                       // if it's not the end of a file, it's another char
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {   // outside of a word
            state = OUT;
        } else if (state == OUT) {                  // inside of a word
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}
