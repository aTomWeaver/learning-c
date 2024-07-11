#include <stdio.h>

int main()
{
    int iseof, isnoteof;
    iseof = (getchar() == EOF);
    isnoteof = (getchar() != EOF);
    printf("Is EOF: %d\n", iseof);
    printf("Is NOT EOF: %d\n", isnoteof);
}
