#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    printf("digite um numero: ");
    scanf("%d",&num1);
    getchar();
    int *ptr = (int *)malloc(num1*sizeof(int));
    if (ptr == NULL) {  // Verifica se a alocação foi bem-sucedida
        printf("Erro ao alocar memória!\n");
        free(ptr);
        return 1;
    }
    int num2;
    for(int i=0;i<num1;i++){
        printf("\ndigite o %d numero: ",i+1);
        scanf("%d",&num2);
        getchar();
        ptr[i]=num2;
    }
    for(int i=0;i<num1;i++){
        printf("\n\n o %d numero digitado foi %d",i+1,ptr[i]);
    }
    
    free(ptr);
}