/*
*/
# include <stdio.h>
void dol_to_shekel (float conversion_rate, float values[], int size);
main ()
{
    /*Scan from user conversion rate*/
    float conversion_rate;
    printf("%s\n", "Get conversion rate from user");
    scanf("%f", &conversion_rate);
    /* Get rates from user */
    float value;
    /* Create array + counter */
    float values[] = {};
    int i;
    i = 0;
    printf("%s\n", "Get values to convert from user");
    while (scanf("%f", &value) != EOF)
    {
        /* Put in array*/
        values[i] = value;
        /* increment counter */
        ++i;
        
    }
    /*Pass on to dol_to_shekel*/
    dol_to_shekel(conversion_rate, values, i);

}

void dol_to_shekel(float conversion_rate, float values[], int size)
{
    float total_in_dollars, total_in_shekels; /* variables to calculate the total value in dollars and shekels*/
    total_in_dollars = total_in_shekels = 0; /* Initialize to 0 */
    /* Printing the start of the column*/
    printf("%s\t%s\n","Dollars", "Shekels");
    /* Loop over array */
    float value;
    int i;
    for (i = 0; i < size; ++i)
    {
        /*Add up sum of dollars*/
        total_in_dollars += values[i];
        /*Add up sum of shekels*/
        total_in_shekels += (values[i] * conversion_rate);
        /*Print*/
        printf("%.2f\t%.2f\n", values[i], values[i] * conversion_rate);
    }
    /*Print total in dollars and shekels*/
    printf("%.2f\t%.2f", total_in_dollars, total_in_shekels);
}