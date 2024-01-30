CC = gcc
CFLAGS = -ansi -Wall -pedantic 
objects = program1 program2
all: $(objects)

$(objects): %: %.c
        $(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(objects)