#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d",&n);

    // Alocando memoria para um array de n inteiros 
    int *array = (int *)malloc(n * sizeof(int));

    //verificando se a alocação foi bem-sucedida
    if(array==NULL){ 
        printf("Erro ao alocar memória! \n");
        return 1;
    }

    //preenchendo o array
    for(int i=0;i<n;i++){
        array[i] = i*2; // exemplo : preenche com valores pares
    }
    //Exibindo o array
    printf("Array: ");
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);

    }
    printf("\n");
    free(array);
}