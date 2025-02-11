#include <stdio.h>
#include <stdlib.h>
int main(){
int *ptr;

//aloca memoria para um unico inteiro
ptr = (int *) malloc(3*sizeof(int));

// verifica se a alocação foi bem sucedida
if(ptr == NULL){
    printf("Erro ao alocar memoria!\n");
    return 1;

}
// atribui um valor à memória alocada
*ptr = 42;
*(ptr+1) = 96;
*(ptr+2)= 21;


//Exibe o valor armazenado
for(int i=0;i<3;i++){
    
    printf("Valor armazenado: %d\n", *ptr);
    *ptr++;
}
//libera a memoria alocada
free(ptr);

return 0;
}