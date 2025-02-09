#include <stdio.h>
int soma(int *vet,int tamanho){
    int soma2=0;
    for(int i=0;i<tamanho;i++){
        soma2+=*(vet+i);
    }
    return soma2;
}
int main(){
    int soma1,soma2;
    int vet[] ={1,2,3,4,5};
    int *ptr=vet;
    int tamanho =sizeof(vet)/sizeof(vet[0]);
    soma1 = soma(ptr,tamanho);
    soma2=  soma(&ptr[0],tamanho);
    printf("o valor da soma é %d\n",soma1);
    printf("o valor da soma é %d",soma2);

}
/*
int somaVetor(int *vet,int tamanho){
    int soma=0;
    for(int i=0;i<tamanho;i++){
        soma+=*(vet+i);
    }
    return soma;
}

int main(){
    int vetor[] ={1,2,3,4,5};
    int tamanho =sizeof(vetor)/sizeof(vetor[0]);

    printf("Soma dos elementos : %d\n",somaVetor(vetor,tamanho));

}
*/

// estudar dps