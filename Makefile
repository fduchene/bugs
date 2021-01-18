CC :=gcc
LDFLAGS :=
SRC :=$(wildcard *.c)
BINARIES :=$(SRC:.c=)
 
all:$(BINARIES)

$(BINARIES):$(SRC)
		$(CC) -ggdb3 -O0 $< $(LDFLAGS) $(CFLAGS) -o $@

clean:
		rm -rf $(EXECUTABLE)
