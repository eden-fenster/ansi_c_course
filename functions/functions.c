#include <stdio.h>

float multiply, decrement, divide;
float celsius (float fahr); 

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr Celsius\n");
    while (fahr <= upper)
    {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr)); /* print conversion */
        fahr = fahr + step; /* increment upper */
    }
}

float celsius(float fahr)
{
    multiply = 5.0;
    decrement = 32.0;
    divide = 9.0;
    return (multiply/divide) * (fahr - decrement); /* convert to celsius */
}
