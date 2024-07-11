#include <stdio.h>

#define ENTER '\n'  /* we could have also put 10 because '\n' evals to 10. */


/* Count characters in input; 1st version */
/* Btw, if you want to run this in terminal, ctrl+d = EOF. */
int main()
{
    int c;
    long nc;

    nc = 0;
    while ((c = getchar()) != EOF) {
        /* Because I'm running this in terminal, I don't want to count
         * the Enter key */
        if (c != ENTER) {
            printf("Character pressed: %d\n", c);
            ++nc;
        }
    }
    printf("Total characters: %ld\n", nc);
    return 0;
}
