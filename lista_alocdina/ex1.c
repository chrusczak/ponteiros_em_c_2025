#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {  // Verifica se a alocação foi bem-sucedida
        printf("Erro ao alocar memória!\n");
        free(ptr);
        return 1;
    }
    int num;
    printf("digite um numero: ");
    scanf("%d",&num);
    *ptr = num;
    printf("\n\n o numero digitado foi %d",*ptr);

    free(ptr);
}