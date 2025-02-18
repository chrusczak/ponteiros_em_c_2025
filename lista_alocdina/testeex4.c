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
    strcpy(ptr,frase);
    printf("a frase digitada foi: %s ",ptr);
    //printf("\nA frase digitada foi %s",*ptr);
    free(ptr);


} 