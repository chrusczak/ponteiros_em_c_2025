#include <stdio.h>

int main() {
    int p = 10;
    int *ptr = &p;   // ptr aponta para p
    int **ptr2 = &ptr; // ptr2 é um ponteiro para ptr

    printf("Valor da variável: %d\n", p);
    printf("Valor pelo ponteiro: %d\n", *ptr); // *ptr acessa o valor de p
    printf("Endereço pelo ponteiro: %p\n", ptr); // ptr armazena o endereço de p
    printf("Valor do segundo ponteiro: %d\n", **ptr2); // **ptr2 acessa o valor de p
    printf("Endereço do segundo ponteiro: %p\n", *ptr2); // *ptr2 acessa o endereço armazenado em ptr
    printf("Endereço do ponteiro ptr2: %p\n", ptr2); // ptr2 armazena o endereço de ptr

    return 0;
}
