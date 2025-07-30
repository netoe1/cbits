# Copyright 2025 Ely Torres Neto
# Licensed under the Apache License, Version 2.0

CC = gcc
CFLAGS = -Wall

# Arquivos fonte e objetos
SRCS = operations.c gates.c main.c
OBJS = operations.o gates.o main.o

# Executável final
TARGET = main

all: $(TARGET)


# Linka o executável a partir dos objetos
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	ar rcs libcbits.a operations.o gates.o


# Regras para compilar cada objeto
operations.o: operations.c
	$(CC) $(CFLAGS) -c $< -o $@

gates.o: gates.c
	$(CC) $(CFLAGS) -c $< -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) *.bin *.obj
