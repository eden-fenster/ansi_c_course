#include <stdio.h>
#define TABINC 8 /* tab increment size */

/*  replace tabs with the proper number of blanks */
main()
{
    int c, nb, pos;

    nb = 0; /* number of blanks */
    pos = 1; /* position of character in line */
    while ((c = getchar()) != EOF)
    {
        if (c == '\t') /* if a tab */
        {
            nb = TABINC - (pos - 1) % TABINC;
            while (nb > 0)
            {
                putchar(' ');
                ++pos;
                --nb;
            }
        } 
        else if (c == '\n') /* newline character */
        {
            putchar(c);
            pos = 1;
        }
        else /* all other characters */
        {
            putchar(c);
            ++pos;
        }
    }
}