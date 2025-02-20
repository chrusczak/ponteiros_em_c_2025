#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("digite o tamanho do seu vetor");
    
    int *ptr = (int *) malloc(n* sizeof(int));
    if(ptr==NULL){
        printf("falha de segmentação ");
        return 1;
    }
    for(int i =0;i<n;i++){
        ptr[i] = randon() %100;
    }
    for( int i =0;i<n;i++){
        for(i=0;i<n;i++){
            // quero rodar o código mudando o 1 com o 2, o 2 com o 3 , para todos
        }
    }

    for(int j;j<n;j++){
        printf("numero %d = %3d\n",j+1,ptr[j]);
    }
}