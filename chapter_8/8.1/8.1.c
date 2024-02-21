# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void error(char *fmt, ...);

/* cat: read/write/open/close */
main(int argc, char *argv[])
{
    int fd;
    void filecopy(int ifd, int ofd);

    if (argc == 1) /* copy standard input */
    {
        filecopy(0, 1);
    }
    else
    {
        while (--argc > 0)
        {
            if ((fd = open(*++argv, O_RDONLY)) == -1) /* If can't open, print error message */
            {
                error("cat: can't open %s", *argv);
            }
            else /* Else, write to file */
            {
                filecopy(fd, 1);
                close(fd);
            }
        }
    }
    return 0;
}

/* filecopy: copy file to another file */
void filecopy(int ifd, int ofd)
{
    int n;
    char buf[BUFSIZ];

    while ((n = read(ifd, buf, BUFSIZ)) > 0)
    {
        if (write(ofd, buf, n) != n) /* if can't write, print error */
        {
            error("cat: write error");
        }
    }
}

/* error: print an error message and die */
void error(char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    fprintf(stderr, "error: ");
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);
    exit(1);
}