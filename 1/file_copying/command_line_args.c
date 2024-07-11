#include <stdio.h>

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++) {
        printf("%s%s%s\n", argv[i], argv[i+1], argv[i]);
    }
}
