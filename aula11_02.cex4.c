#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n=5;

    //Aloca memória para 5 inteiros e inicaliza com 0
    ptr = (int *) calloc(n,sizeof(int));

    //verifica se a alocação foi bem-sucedida
    if(ptr==NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    // Exibe os valores armazenados (todos devem ser 0)
    printf("Valores na memória alocada: \n");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");

    //libera a memória alocada
    free(ptr);
}