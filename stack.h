//Documento: stack.h
//Curso: IE-0117
//Trabajo: Lab 6
//Estudiante: Anthonny Artavia Alpizar C10735

#ifndef STACK_H
#define STACK_H

// Esta es la definición del nodo de la lista enlazada
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Esta es la definición de la pila
typedef struct Stack {
    Node* top;
} Stack;

// Aqui se declaran las funciones
void initialize(Stack* stack);
void push(Stack* stack, int data);
int pop(Stack* stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
void clean(Stack* stack);

#endif // STACK_H
