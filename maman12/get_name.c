/* get_name.c
The program gets a list of names from the user and returns a random name
Date: 11-01-2024 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMBER_OF_NAMES 30
#define NAME_SIZE 20

char names[NUMBER_OF_NAMES+1][NAME_SIZE+1];
int counter = 0;
void get_name();

/* check if name is already in array */
int name_already_exists(char *name, int current_number_of_names) {
	int i;
	for(i = 0; i <  current_number_of_names; i++)
    {
        if (strcasecmp(names[i],name) == 0)
        {
            /* If in array, return 1*/
            printf("Duplicate found -> %s\n", name);
             return 1;
        }
	}
    /* Else, return 0 */
    return 0;
}

/**/
main()
{
    int get_name_counter;
    /* Define counter */
    /* Get input from user */
    printf("Enter a list of names:\n");
    /* add to array and increment counter */
    while (scanf("%s", names[counter]) != EOF)
    {
            /* Check if name is already in array, if yes, terminate program */
            if (name_already_exists(names[counter], counter) ) 
            {
                printf("The name %s already exists - exiting\n", names[counter]);
                return 1;
            }
        /* If not, increment counter */
        counter++;
    }
    /* add blank after all names have been inputed */ 
    strcpy(names[counter],"");

    /* Call get_name 10 times */
    for (get_name_counter = 0; get_name_counter < 10; get_name_counter++)
    {
        get_name();
    }
}

/* Pick a random name and print it, do that 10 times */
void get_name()
{
    int random_index = rand()%(counter);
    printf("Name picked is -> %s\n", names[random_index]);
}