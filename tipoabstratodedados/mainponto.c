#include <stdio.h>

#include "ponto.c"//inclui o TAD

int main(){
    Ponto* p1 = criarPonto(2.0,3.0);
    exibirPonto(p1);

    moverPonto(p1,1.5,-2.0);
    exibirPonto(p1);

    destruirPonto(p1); // libera a memória
    return 0;

}