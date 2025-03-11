#include <stdio.h>
int main(){
    struct Pessoa { 
        char nome[50]; 
        int idade; 
    }; 
    struct Pessoa p[] = {{"João", 25},{"Maria",30}}; 
    struct Pessoa *ptr = &p; 
    printf("Endereço da estrutura: %p\n", (void *)ptr); 
    printf("Nome: %s, Idade: %d\n", ptr->nome, ptr[0].idade); 
}
