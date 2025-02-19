#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int *) malloc( sizeof(int));
    if(ptr==NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    *ptr = 42; // armazena um valor na memória alocada
    printf("Antes do free: ptr  = %p,valor = %d \n ",(void*)ptr , *ptr);
    free(ptr);//libera a memoria
    printf("Depois do free: ptr ainda aponta para %p, mas a memoria foi liberada!\n",(void*)ptr);

    //Erro acessando memória já liberada
    printf("Tentando acessar o valor após free %d (comportamento indefinido!)\n",*ptr);
}