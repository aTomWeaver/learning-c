#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fptr;
    printf("There are %d arguments.\n", argc);

    for (int i = 1; i < argc; i++) {
        fptr = fopen("output.txt", "a");
        fprintf(fptr, "%d\t%s\n", argc, argv[i]);
    }
    fclose(fptr);
    return 0;
}
