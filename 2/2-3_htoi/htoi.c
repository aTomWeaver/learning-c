#include <stdio.h>

int htoi(char hex[]);

int main(int argc, char** argv)
{
    // handle args
    if (argc < 2) {
        printf("No argument given.\n");
        return 1;
    } else if (argc > 2) {
        printf("Too many arguments given.\n");
        return 1;
    }

    char* hex_string = argv[1];
    printf("%s in decimal: %ld\n", hex_string, htoi(hex_string));

    return 0;
}

/* converts string of hex to decimal int; returns 0 if invalid */
int htoi(char hex[])
{
    long int i;
    int result, mult;

    // set i to length of hex[]
    for (i = 0; hex[i] != '\0'; i++);

    result = 0;
    mult = 1;
    i -= 1;
    for (i; i >= 0; i--) {
        if ((i == 1 && hex[i] == 'x') && (hex[0] == '0')) {
            // avoid unnecessary multiplication if string starts with "0x"
            return result;
        } else if ((hex[i] >= '0') && (hex[i] <= '9')) {
            // char is 0-9
            result += (hex[i] - '0');
        } else if ((hex[i] >= 'A') && (hex[i] <= 'F')) {
            // char is A-F
            result += (hex[i] - 'A' + 10) * mult;
        } else {
            return 0;
        }
        mult *= 16;
    }

    return result;
}
