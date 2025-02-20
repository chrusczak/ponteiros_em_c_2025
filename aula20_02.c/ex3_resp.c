#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, tamanho;

    // Solicita o número de nomes e o tamanho máximo de cada nome
    printf("Digite o número de nomes: ");
    scanf("%d", &n);
    printf("Digite o tamanho máximo de cada nome: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente o array de strings
    char **nomes = (char **)malloc(n * sizeof(char *));
    if (nomes == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        nomes[i] = (char *)malloc((tamanho + 1) * sizeof(char));
        if (nomes[i] == NULL) {
            printf("Erro na alocação de memória!\n");
            return 1;
        }
    }

    // Solicita os nomes
    for (int i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Imprime os nomes
    printf("Nomes digitados:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    // Libera a memória
    for (int i = 0; i < n; i++) {
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}