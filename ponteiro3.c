#include <stdio.h>
// ponteiro é uma gaveta tripla = endereço de memoria , indice do vetor , valor 
int main(){

    char palavra[] ="Bem dia";
    char *ptr = palavra; // ptr aponta para o primeiro caractere da string
    
    char *ptr2 =&palavra[1];

    printf("String original: %s\n",ptr);
    *(ptr+1)='o'; //modifica o segundo caractere de e para o

    printf("String modificada: %s\n",ptr);

    printf("Endereço da segunda letra : %p\n",*ptr2);
    printf("Valor da letra : %c\n",*(ptr+1));


    return 0;
}