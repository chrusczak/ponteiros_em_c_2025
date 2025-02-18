#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int main(){
    char *ptr;
    char frase[TAM];
    printf("digite uma frase: ");
    fgets(frase,TAM,stdin);
    frase[strcspn(frase,"\n")]='\0';
    
    ptr= (char *)malloc((strlen(frase)+1)*sizeof(char));
    if (ptr == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }
    for(int i =0;i<strlen(frase)+1;i++){
        ptr[i]=frase[i];
    }
    printf("a frase digitada foi: ");
    for(int j=0;j<strlen(frase);j++){
        printf("%c",ptr[j]);
    }
    //printf("\nA frase digitada foi %s",*ptr);
    free(ptr);


} 