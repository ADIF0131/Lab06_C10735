//Documento: stack.c
//Curso: IE-0117
//Trabajo: Lab 6
//Estudiante: Anthonny Artavia Alpizar C10735

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Inicializacion de la pila
void initialize(Stack* stack) {
    stack->top = NULL;
}

// Se agrega un elemento a la parte superior de la pila
void push(Stack* stack, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        fprintf(stderr, "Fallo en la asignación de memoria\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Aqui se elimina y devuelve el elemento en la parte superior de la pila
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Hay un desbordamiento de pila\n");
        exit(1);
    }
    Node* temp = stack->top;
    int poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

// Aqui se devuelve el elemento en la parte superior de la pila sin eliminarlo
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "La pila está vacía\n");
        exit(1);
    }
    return stack->top->data;
}

// Se verifica si la pila está vacía
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Se limpia la pila y libera la memoria utilizada
void clean(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
}

