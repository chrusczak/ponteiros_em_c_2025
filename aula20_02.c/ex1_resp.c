#include <stdlib.h>
#include <stdio.h>

int main(){
    int n ,m ;
    printf("insira o numero de linhas : ");
    scanf("%d",&n);
    getchar();
    printf("\ninsira o numero de colunas:  ");
    scanf("%d",&m);
    getchar();


    int **matriz = (int**)malloc(n*sizeof(int *));
    if(matriz == NULL){
        printf("Erro na alocação de memória! \n");
        return 1;
    }
    for(int i =0;i<n;i++){
        matriz[i] = (int *) malloc(m*sizeof(int));
        if(matriz[i] ==NULL){
            printf("Erro de palocação de memoria! \n");
            return 1;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j] = rand() %100;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matriz[i][j]);
        }
        puts("");
    }
        // Libera a memória
        for (int i = 0; i < n; i++) {
            free(matriz[i]);
        }
        free(matriz);

    
}