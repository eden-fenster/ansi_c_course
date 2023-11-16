#include <stdio.h>

void rcomment(int c);
void in_comment(void);
void echo_quote(int c);

/* remove all comments from a valid C program */
main()
{
    int c, d;

    while((c = getchar()) != EOF)
    {
        rcomment(c);
    }
    return 0;
}

/* rcomments: read each character, remove the comments */
void rcomment(int c)
{
    int d;

    if (c == '/')
    {
        if ((d = getchar()) == '*')
        {
            in_comment(); /* begining comment */
        }
        else if (d == '/')
        {
            putchar(c);  /* another slash */
            rcomment(d);
        }
        else
        {
            putchar(c); /* not a comment */
            putchar(d);
        }
        
    }
    else if (c == '\'' || c == '"')
    {
        echo_quote(c);
    }
    else
    {
        putchar(c);
    }
    
}

/* in_comment: inside of a valid comment */
void in_comment(void)
{
    int c, d;

    c = getchar(); /* prev */
    d = getchar(); /* curr */
    while(c != '*' || d != '/') /* search for end */
    {
        c = d;
        d = getchar();
    }
}

/* echo_quote: echo characters within quotes */
void echo_quote(int c)
{
    int d;

    putchar(c);
    while( (d = getchar()) != c) /* search for end */
    {
        putchar(d);
        if (d == '\\')
        {
            putchar(c); /* ignore escape sequence */
        }
    }
    putchar(d);
}