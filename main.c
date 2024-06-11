//Documento: main.c
//Curso: IE-0117
//Trabajo: Lab 6
//Estudiante: Anthonny Artavia Alpizar C10735

#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack;
    initialize(&stack);

    printf("Poniendo los valores 10, 20, 30, 40 y 50 en la pila de datos del stack.\n");
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);

    printf("Elemento en la parte superior actual: %d\n", peek(&stack));


    printf("Sacando elementos de la pila: \n");
    while (!isEmpty(&stack)) {
        printf("Numeros sacados: %d\n", pop(&stack));
    }

    clean(&stack);
    return 0;
}
