#include <stdio.h>

#define NEWLINE '\n'
#define TAB '\t'
#define SPACE ' '

int main()
{
    int c, nl, t, s;
    nl = t = s = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == NEWLINE) {
            ++nl;
        }
        if (c == TAB) {
            ++t;
        }
        if (c == SPACE) {
            ++s;
        }
    }
    printf("Newlines: %d\n", nl);
    printf("Tabs: %d\n", t);
    printf("Spaces: %d\n", s);

    return 0;
}
