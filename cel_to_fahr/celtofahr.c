#include <stdio.h>

float multiply, decrement, divide;

/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 */
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

    celsius = lower;
    printf("Celsius Fahr\n");
    while(celsius <= upper) 
    {
        fahr = (divide * celsius) / multiply + decrement;
        printf("%6.0f %3.1f\n", celsius, fahr);
        celsius = celsius + step ;
    }
}

