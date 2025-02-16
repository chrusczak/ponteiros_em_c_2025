#include <stdio.h>
#include <stdlib.h>
//revisar , feito com auxilio do gpt
int main() {
    char *palavra = NULL;  // Ponteiro para armazenar a string
    char c;  
    int tamanho = 0;

    printf("Digite uma palavra: ");

    while ((c = getchar()) != '\n' && c != EOF) { // Lê caractere por caractere
        char *temp = realloc(palavra, (tamanho + 1) * sizeof(char)); // Realoca espaço
        if (temp == NULL) {
            printf("Erro de alocação!\n");
            free(palavra);
            return 1;
        }
        palavra = temp;
        palavra[tamanho] = c;
        tamanho++;
    }

    // Adiciona o caractere nulo no final
    char *temp = realloc(palavra, (tamanho + 1) * sizeof(char));  
    if (temp == NULL) {
        printf("Erro de alocação!\n");
        free(palavra);
        return 1;
    }
    palavra = temp;
    palavra[tamanho] = '\0';  

    printf("A palavra digitada foi: %s\n", palavra);

    free(palavra);  // Libera memória

    return 0;
}
