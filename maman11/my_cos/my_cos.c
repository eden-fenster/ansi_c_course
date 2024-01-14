/*
my_cos.c
The program gets a number in degrees, the cos of the number gets calculated based on both the math library and the taylor series.
Name: Eden Fenster.
Date: 20-12-2023
*/
#include <stdio.h>
#include <math.h>
# define PI 3.14159265359
# define accuracy 0.000001

double factorical (int num);
double my_cos (double num);
main()
{
    /* Get number from user */
    double num;
    printf("Input a number in degrees to calculate it's cos\n");
    while (scanf("%lf", &num) != EOF)
    {
        /* Convert to radians */
        double num_in_radians = num * (PI/180);
        /* Send to my_cos and print it */
        printf("Result according to my_cos -> %.6f\n", my_cos(num_in_radians));
        /* Print cos */
        printf("Result according to the math library -> %f\n", cos(num_in_radians));
    }
    
}

/* Calculate the factorial for a number */
double factorial (int num)
{
    /* Counter */
    int i;
    /* Variable to store factorial */
    double fac;
    fac = 1.0;
    /* Loop from 1 to num, multiply fac by num*/
    for (i = 1; i <= num; ++i)
    {
        fac *= i;
    }
    /* Return factorial */
    return fac;
}

/* Calculate cos according to taylor series*/
double my_cos (double num)
{
    /* Initilize counter, result and temp*/
    int counter = 1;
    double result = 1;
    double temp = 1;
    /* while abs < 1.0c-6, loop*/
    while (fabs(temp) > accuracy)
    {
        temp = (pow(-1, counter) * pow(num, 2 * counter))/factorial(2*counter);
        result += temp;
        counter++;
    }
    /* Return result */
    return result;
}