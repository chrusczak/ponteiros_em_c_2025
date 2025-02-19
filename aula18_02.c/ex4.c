#include <stdio.h>
#include <stdlib.h>

int main(){

    
    int n=7;
    int *ptr = (int *) malloc(n* sizeof(int));

    //Preenche o vetor com valores
    for(int i =0;i<n;i++){
        printf("Digite o número %d: ",i+1);
        scanf("%d",&ptr[i]);

    }
    //Exiba os valores armazenados 
    printf("Valores digitados: \n");
    for(int i =0;i<n;i++){
        printf("endereço ptr[%p] [%d] = %d\n ",&ptr[i],i,ptr[i]);

    }
    free(ptr);
}