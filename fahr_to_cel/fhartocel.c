#include <stdio.h>

float multiply, decrement, divide;

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    multiply = 5.0;
    decrement = 32.0;
    divide = 9.0;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr Celsius\n");
    while (fahr <=upper)
    {
        celsius = (multiply/divide) * (fahr - decrement); /* convert to celsius */
        printf("%3.0f %6.1f\n", fahr, celsius); /* print conversion */
        fahr = fahr + step; /* increment upper */
    }
}
