/*
doll.h
The program gets from the user the conversion rate + values in dollars.
It returns a table of the values in both dollars and shekels, including the total of each column.
Name: Eden Fenster
Date: 20-12-2023
*/
# include <stdio.h>
main ()
{
    /*Scan from user conversion rate*/
    float conversion_rate;
    printf("%s\n", "Get conversion rate and values to convert from user");
    scanf("%f", &conversion_rate);
    /* Get rates from user */
    float value;
    float total_in_dollars, total_in_shekels; /* variables to calculate the total value in dollars and shekels*/
    total_in_dollars = total_in_shekels = 0; /* Initialize to 0 */
    /* Printing the start of the column*/
    printf("\n%s\t%s\n","$", "IS");
    while (scanf("%f", &value) != EOF)
    {
        /* Calculate and print */
        /*Add up sum of dollars*/
        total_in_dollars += value;
        /*Add up sum of shekels*/
        total_in_shekels += (value * conversion_rate);
        /*Print*/
        printf("%.2f\t%.2f\n", value, value * conversion_rate);
    }
    /*Print total in dollars and shekels*/
    printf("%.2f\t%.2f\n", total_in_dollars, total_in_shekels);
}
