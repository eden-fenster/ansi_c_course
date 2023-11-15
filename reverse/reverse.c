#include <stdio.h>
# define MAXLINE 1000 /* max input line size */

int getline(char line[], int maxline);
void reverse(char s[]);

/* reverse input lines, a line at a time */
main ()
{
    char line[MAXLINE]; /* current input line */
    
    while (getline(line, MAXLINE) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
}

/* reverse string s */
void reverse(char s[])
{
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0') /* find the end of string s */
    {
        ++i;
    }
    --i; /* back off from \0 */
    if (s[i] == '\n')
    {
        --i; /* leave newline in place */
    }
    j = 0; /* begining of new string s */
    while (j < i)
    {
        temp = s[j]; /* swap the characters*/
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}