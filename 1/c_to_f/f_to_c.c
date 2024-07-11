#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("Celsius\tFahr\n");
    printf("-------\t----\n");
    while  (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%3.0f\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
