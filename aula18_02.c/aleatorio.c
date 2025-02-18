#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p,*ptr,valor;
    printf("digite um valor: ");
    scanf("%d",p);
    printf("\nvalor do ponteiro: %d \nendereço apontado pelo ponteiro: %p \nendereço do ponteiro:  %p",*p,p,&p);

    printf("\n\ndigite um segundo valor");
    scanf("%d",&valor);
    *ptr=valor;
    printf("\nvalor do ponteiro: %d \nendereço apontado pelo ponteiro: %p \nendereço do ponteiro:  %p",*ptr,ptr,&ptr);
    printf("\nendereço da variavel: %p",&valor);
}