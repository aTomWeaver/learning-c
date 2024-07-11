#include <stdio.h>

#define TRUE    1
#define FALSE   0

int main()
{
    int c, blank_flag;

    blank_flag = FALSE;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {             /* If char is not ' ' then we reset the blank flag */
            blank_flag = FALSE;
        }
        if (!blank_flag) {          /* If blank flag is false, output the char */
            putchar(c);
        }
        if (c == ' ') {
            blank_flag = TRUE;      /* If char is ' ', it will set the blank flag. */
        }                           /* However since the flag is only set after the putchar(), */
    }                               /* the FIRST ' ' will get printed. */
    return 0;
}
