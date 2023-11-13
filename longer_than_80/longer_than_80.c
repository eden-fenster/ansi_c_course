#include <stdio.h>
#define MAXLINE 1000 /* max input */
#define LONGLINE 80

int getline(char line[], int maxline);
/* print lines longer than LONGLINE */
main()
{
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > LONGLINE)
        {
            printf("%s", line);
        }
    }
    return 0;
}