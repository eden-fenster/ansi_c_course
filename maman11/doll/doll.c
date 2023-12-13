/*
*/
# include <stdio.h>
void dol_to_shekel (float conversion_rate);
main ()
{
    /*Scan from user conversion rate*/
    float conversion_rate;
    scanf("%f", &conversion_rate);
    /*Pass on to dol_to_shekel*/
    dol_to_shekel(conversion_rate=conversion_rate);

}

void dol_to_shekel(float conversion_rate)
{
    float total_in_dollars, total_in_shekels; /* variables to calculate the total value in dollars and shekels*/
    total_in_dollars = total_in_shekels = 0; /* Initialize to 0 */
    /* Printing the start of the column*/
    printf("%s\t%s\n","Dollars", "Shekels");
    /*Get values from user*/
    float value;
    while (scanf("%f", &value) != EOF)
    {
        /*Add up sum of dollars*/
        total_in_dollars += value;
        /*Add up sum of shekels*/
        total_in_shekels += (value * conversion_rate);
        /*Print*/
        printf("%.2f\t%.2f\n", value, value * conversion_rate);
    }
    /*Print total in dollars and shekels*/
    printf("%.2f\t%.2f", total_in_dollars, total_in_shekels);
}