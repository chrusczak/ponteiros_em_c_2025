#include <stdio.h>
#include <ctype.h>
// criar um programa que conta o numero de vogais  usando ponteiros


int contarVogais(char *str){
    int cont=0;
    while(*str != '\0'){
        char c = tolower(*str);// converte para minuscula para facilitar
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cont++;
        }
        str++; //avança o ponteiro para o proximo caractere
    }
    return cont++;
}
int main(){
    char str[]="palavra";
    printf("numero de vogais: %d\n",contarVogais(str));

    return 0;
}