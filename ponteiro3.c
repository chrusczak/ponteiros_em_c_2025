#include <stdio.h>
// ponteiro é uma gaveta tripla = endereço de memoria , indice do vetor , valor 
int main(){

    char palavra[] ="Bem dia";
    char *ptr = palavra; // ptr aponta para o primeiro caractere da string
    
    char *prt2 =&palavra[1];

    printf("String original: %s\n",ptr);
    *(ptr+1)='o'; //modifica o segundo caractere de e para o

    printf("String modificada: %s\n",ptr);

    printf("Endereço da segunda letra : %p\n",*prt2);
    printf("Valor da letra : %c\n",prt2);


    return 0;
}