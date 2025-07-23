CBITS = cbits.c
OPERATIONS = operations.c
GATES = gates.c
MAIN = main.c
CC = gcc 

all:
$(CC) -o main $(CBITS) $(OPERATIONS) $(GATES) $(MAIN)