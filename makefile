# Compiler
CC = gcc 

# .c files
CBITS = cbits
OPERATIONS = operations
GATES = gates
MAIN = main


all:
	$(CC) -o main $(CBITS).c $(OPERATIONS).c $(GATES).c $(MAIN).c

clean:
	rm -rf main .vscode
	rm -rf *.bin *.obj