#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    int tamanho;
    //Solicita o numero de nomes e o tamanho mázimo de cada nome 
    printf("Digite o numero de nomes :");
    scanf("%d",&n);
    getchar();
    printf("Digite o tamanho máximo de cada nome: ");
    scanf("%d",&tamanho);
    getchar();

    //Aloca dinamicamente o array de strings
    char **nomes = (char**)malloc(n*sizeof(char *));
    if(nomes == NULL){
        printf("Erro na alocação de memória!\n ");
        return 1;
    }
    for(int i=0;i<tamanho;i++){
        nomes[i]=(char*) malloc(n*sizeof(char));

    }
    for(int j=0;j<n;j++){
        printf("digite o %d nome: ",j+1);
        fgets(nomes[j],tamanho,stdin);
        nomes[j][strcspn("nomes","\n")]='\0';

    }
    for(int k=0;k<n;k++){
        printf("nome %d: %s\n",k+1,nomes[k]);

    }
    for (int t = 0; t < n; t++) {
        free(nomes[t]);
    }
    free(nomes);

}