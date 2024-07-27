#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Bro I fucking hacked myself\n");
    printf("CHAR MIN:\t%d\n", CHAR_MIN);
    printf("CHAR MAX:\t%d\n", CHAR_MAX);
    printf("UCHAR MAX:\t%d\n", UCHAR_MAX);  // Unsigned

    printf("SHORT MIX:\t%d\n", SHRT_MIN);
    printf("SHORT MAX:\t%d\n", SHRT_MAX);

    printf("INT MIN:\t%d\n", INT_MIN);
    printf("INT MAX:\t%d\n", INT_MAX);

    printf("LONG MIX:\t%ld\n", LONG_MIN);
    printf("LONG MAX:\t%ld\n", LONG_MAX);
    printf("ULONG MAX:\t%lu\n", ULONG_MAX);  // Unsigned

    return 0;
}
