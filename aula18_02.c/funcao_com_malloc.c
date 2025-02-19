#include <stdio.h>
#include <stdlib.h>
int alocar(int n){
    int *ptr = (int *) malloc(n*sizeof(int));
    if(ptr==NULL){
        printf(" \nERRO ALOCAÇÃO");
        free(ptr);
        return 1;
    }
    return *ptr;
}

int main(){
    int n;
    printf("digite quanto de espaço você quer alocar");

    scanf("%d",&n);
    int *ptr = alocar(n);


    free(ptr);
}