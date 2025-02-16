#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    float num2;
    float soma=0;
    int c;
    printf("quantos notas vc quer inserir: ");
    scanf("%d",&num1);
    getchar();
    float *ptr = (float *)malloc(num1* sizeof(float));
    if (ptr == NULL) {  // Verifica se a alocação foi bem-sucedida
        printf("\nErro ao alocar memória!\n");
        free(ptr);
        return 1;
    }
    for(int i=0;i<num1;i++){
        printf("\ndigite o %d numero: ",i+1);
        scanf("%f",&num2);
        while (( c = getchar()) != '\n' && c != EOF);
        ptr[i]=num2;
    }
    for(int i=0;i<num1;i++){
        soma+=ptr[i];
    }
    
    printf("\n\tA meida das notas é %.2f",soma/num1);
    
    free(ptr);
}