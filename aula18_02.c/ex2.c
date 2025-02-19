#include <stdio.h>
#include <stdlib.h>

void vazamento(){
    int *ptr = (int *) malloc (1*sizeof(int)); // Aloca memória para 5 inteiros
    if(ptr ==NULL){
        printf("Erro ao alocar memória !\n ");
        free(ptr);
        return 1;
    }
    //preenche o array com vetores
    for(int i=0; i<5 ;i++){
        ptr[i] = i*10;
        printf("%d",ptr[i]);
        
    }
    printf("\n");
    //ERRO : A memoria alocada nunca é liberada com free(ptr);

}
int main(){
    
    vazamento(); //chama a função que alocaca memória sem liberar
    return 0;
}