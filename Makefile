CC = gcc
CFLAGS = -Wall -O0
EXEC = main
OBJS = utils.o skiplist.o bloomfilter.o database.o main.o

all: $(OBJS) $(EXEC)

gen: cmd_generator.o utils.o
	$(CC) $(CFLAGS) -o $@ $^

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean
clean:
	rm -f *.o $(EXEC) gen