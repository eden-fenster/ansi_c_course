CC = gcc
CFLAGS = -ansi -Wall -pedantic 
objects = mymat mainmat
all: $(objects)

$(objects): %: %.c
        $(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(objects)