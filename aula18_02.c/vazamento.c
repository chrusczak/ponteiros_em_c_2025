// vazamento , não por free , e memoria que n foi permitida.
#include <stdio.h>

void Frasemin(char *str){
    while(*str != '\0'){//percorre cada caractere até o fim da string
        if(*str >= 'a' && *str <='z'){
            *str -= 32;//converte letras minúsculas para maiúsculas
        }
        str++;//avança para o próximo caractere
    }
}
void Frasemax(char *str){
    while(*str != '\0'){
        if(*str>='A' && *str<='Z'){
            *str+=32;
        }
        str++;
    }
}
int main(){
    char frase[] = "ola, mundo"; // criando um array mutável
    char frase2[]="ESTAMOS TREINANDO";
    printf("Antes: %s\n",frase);
    printf("Antes: %s\n",frase2);
    Frasemin(frase); // Passamos o ponteiro para a função
    Frasemax(frase2);
    printf("Depois: %s\n",frase);
    printf("Depois: %s\n",frase2);
    
    printf("Depois: %s\n",frase2);
    return 0;
}

////////////////AGORA MUDE DE MAIÚSCULO PARA MINÚSCULO