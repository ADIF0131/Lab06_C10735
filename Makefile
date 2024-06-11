# Documento: Makefile
#Curso: IE-0117
#Trabajo: Lab 6
#Estudiante: Anthonny Artavia Alpizar C10735

CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main
OBJ = main.o stack.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

clean:
	rm -f $(OBJ) $(TARGET)
	

