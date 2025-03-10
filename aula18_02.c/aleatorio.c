/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor = 5;
    int *ptr = &valor;        // Ponteiro simples que aponta para 'valor'
    int **ptr2 = &ptr;        // Ponteiro duplo que aponta para 'ptr'

    // Visualizando os valores e endereços
    printf("\n--- Visualizando ptr ---\n");
    printf("valor de valor: %d\n",valor);
    printf("endereço de valor: %p\n",&valor);
    printf("Endereço de ptr (endereço de ponteiro simples): %p\n", &ptr);  // Endereço de ptr
    printf("Valor de ptr (endereço de 'valor'): %p\n", ptr);              // Endereço de 'valor' (valor armazenado em ptr)
    printf("Valor apontado por ptr (*ptr) (valor de 'valor'): %d\n", *ptr);  // Valor apontado por ptr, que é 'valor'
    
    printf("\n--- Visualizando ptr2 ---\n");
    printf("Endereço de ptr2 (endereço de ponteiro duplo): %p\n", &ptr2);  // Endereço de ptr2
    printf("Valor de ptr2 (endereço de ptr): %p\n", ptr2);                // Valor armazenado em ptr2, que é o endereço de ptr
    printf("Valor apontado por ptr2 (*ptr2) (endereço de 'valor'): %p\n", *ptr2);  // Endereço de 'valor' (apontado por ptr2)
    printf("Valor apontado por *ptr2 (**ptr2) (valor de 'valor'): %d\n", **ptr2); // Valor de 'valor' (apontado por **ptr2)

    return 0;
}
*/
#include <stdio.h>

void alterarPonteiro(int **p) {
    *p = NULL;  // Modifica o ponteiro local, mas não afeta o ponteiro original
}

int main() {
    int a = 5;
    int *p = &a;  // p aponta para a
    printf("Antes: %d\n", *p);  // Imprime o valor de a antes da alteração
    alterarPonteiro(&p);  // Passa o valor de p (endereço de a)
    printf("Depois: %d\n", *p);  // Imprime o valor de a depois da alteração
    return 0;
}