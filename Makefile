CC=clang
CFLAGS=-Wall -Werror -Wextra

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

all: $(OBJS)

duplicate:
	bash duplicate.sh

clean:
	rm -rf $(OBJS)
	rm -rf test?*.c

.PHONY: all clean duplicate
