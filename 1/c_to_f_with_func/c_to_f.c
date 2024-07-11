#include <stdio.h>


float convert_f_to_c(float fahr);

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr\tCelsius\n");
    printf("----\t-------\n");
    while (fahr <= upper) {
        celsius = convert_f_to_c(fahr);  // using a function this time
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/* convert fahrenheit to celcius */
float convert_f_to_c(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}
