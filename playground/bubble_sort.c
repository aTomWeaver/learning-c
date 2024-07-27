#include <stdio.h>

int ctoi(int char_);

int main(int argc, char *argv[])
{
    int n, i, j;
    // since argc always includes filename, subtract it
    n = argc - 1;
    // start at 1 because argv starts with filename
    for (i = 1; i < n; i++) {
        // subtract 1 from n each time because largest
        // number will always be sorted to end on each
        // iteration.
        for (j = i; j < (n - 1) - 1; j++) {
            int cur = ctoi(*argv[j]);  // convert char to int
            int nxt = ctoi(*argv[j + 1]);  // convert char to int
            if (cur > nxt) {
                int tmp = (char)cur;
                argv[j] = argv[j + 1];
                *argv[j + 1] = tmp;
            }
        }
        for (i = 0; i < n; i++) {
            printf("%c\n", *argv[i]);
        }
    }

    return 0;
}

/* Convert char c into integer */
int ctoi(int c)
{
    int offset = '0' - '0';
    return c - offset;
}
