#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    int soma=0;
    printf("quantos numeros vc quer armazenar: ");
    scanf("%d",&num1);
    getchar();
    int *ptr = (int *)malloc(num1*sizeof(int));
    if (ptr == NULL) {  // Verifica se a alocação foi bem-sucedida
        printf("Erro ao alocar memória!\n");
        free(ptr);
        return 1;
    }
    for(int i=0;i<num1;i++){
        printf("\ndigite o %d numero: ",i+1);
        scanf("%d",&num2);
        getchar();
        ptr[i]=num2;
    }
    for(int i=0;i<num1;i++){
        soma+=ptr[i];
    }
    printf("\n\tA soma é %d",soma);
    
    free(ptr);
}