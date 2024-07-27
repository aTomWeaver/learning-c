#include <stdio.h>

int any(char s1[], char s2[]);

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
    char* s1 = argv[1];
    char* s2 = argv[2];

    printf("index %d\n", any(s1, s2));


    return 0;
}

/* Returns the first index where any char from
 * s2 appears in s1.
 * If no char from s2 appears in s1, returns -1.
 */
int any(char s1[], char s2[])
{
    /* for char in s2:
     *      for i=0;i<s1.len;i++:
     *          if s1[i] == char:
     *              return i;
     */
    int i, j;
    for (i = 0; s2[i] != '\0'; i++) {
        for (j = 0; s1[j] != '\0'; j++) {
            if (s2[i] == s1[j]) {
                return j;
            }
        }
    }
    return -1;
}
