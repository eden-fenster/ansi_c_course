#include <stdio.h>
#define MAXLINE 1000 /* max input line size */

int getline(char line[], int maxline);
int remove(char s[]);

/* remove trailing blanks and tabs, and delete blank lines */
main()
{
    char line[MAXLINE]; /* current input line */
    while (getline(line, MAXLINE) > 0)
    {
        if (remove(line) > 0)
        {
            printf("%s", line);
        }
    }
    return 0;
}

/* remove trailing blanks and tabs from character string s */
int remove(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\n') /* find newline */
    {
        ++i;
    }
    --i; /* back off from '\n' */
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
    {
        --i;
    }
    if (i >= 0) /* is it a nonblank line ? */
    {
        ++i;
        s[i] = '\n'; /* put newline back */
        ++i;
        s[i] = '\0'; /* terminate the string */
    }
    return i;
}