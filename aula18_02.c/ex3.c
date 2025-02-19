#include <stdio.h>
#include  <stdlib.h>

int main(){
    int *ptr = (int *) malloc(1* sizeof(int)); // apenas um inteiro alocado

    if(ptr==NULL){
        printf("Erro ao alocar memória!\n");
        return 1;

    }
    printf("Endereço alocado corretamente %p\n\n",(void *)ptr);
    //tentativa de acessar 5 posições (incluindo fora da alocação)

    for(int i=0;i<5;i++){
        ptr[i] = i*10; //acesso inválido após o primeiro elemento
        printf("ptr[%d] = %d , Endereço: %p %s\n", i ,ptr[i],(void *)&ptr[i] ,(i>0) ? "FORA DO ESPAÇO ALOCADO " : "OK");

    }
    free(ptr);
    return 0;
}