#ifndef PONTO_H //Evita mpultiplas inclusões

#define PONTO_H

typedef struct Ponto Ponto; //Estrutura opca (não revela detalhes internos)

//Funções do TAD

Ponto* criarPonto(float x,float y);
void destruirPonto(Ponto* p);
void moverPonto(Ponto* p,float dx, float dy);
void exibirPonto(Ponto* p);

#endif
