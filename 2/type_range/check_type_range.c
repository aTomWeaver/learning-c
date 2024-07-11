#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("CHAR MIN: %d\n", CHAR_MIN);
    printf("CHAR MAX: %d\n", CHAR_MAX);
    printf("UCHAR MAX: %d\n", UCHAR_MAX);  // Unsigned

    printf("SHORT MIX: %d\n", SHRT_MIN);
    printf("SHORT MAX: %d\n", SHRT_MAX);

    printf("INT MIN: %d\n", INT_MIN);
    printf("INT MAX: %d\n", INT_MAX);

    printf("LONG MIX: %ld\n", LONG_MIN);
    printf("LONG MAX: %ld\n", LONG_MAX);
    printf("ULONG MAX: %lu\n", ULONG_MAX);  // Unsigned

    return 0;
}
