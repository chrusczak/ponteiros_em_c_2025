#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Solicita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Aloca dinamicamente o vetor
    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    // Preenche o vetor com valores
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inverte o vetor
    for (int i = 0; i < n / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[n - 1 - i];
        vetor[n - 1 - i] = temp;
    }

    // Imprime o vetor invertido
    printf("Vetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória
    free(vetor);

    return 0;
}