#include <stdio.h>

 /* Count Lines, Blanks and Tabs */
main()
{
    int c, nt, nb, nl;

    nb = 0; /* Blanks */
    nt = 0; /* Tabs */
    nl = 0; /* Lines */
    while ((c=getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++nb;
        }
        if (c == '\t')
        {
            ++nt;
        }
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d %d %d\n", nb, nt, nl);
}