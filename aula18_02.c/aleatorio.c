#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor =5;
    int *ptr = &valor;

    printf("\nvalor : %d",*ptr);
    printf("\nenderço com valor %p",&valor);
    printf("\nendereço com ponteiro: %p",ptr);
    printf("\nendereço do ponteiro %p",&ptr);


}