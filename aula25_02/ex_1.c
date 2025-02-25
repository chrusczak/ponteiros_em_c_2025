// prova - dia 11
//revisão 
//dia 6 vai ter aula apenas para tirar dúvida 
// pesquisar o const depois
/*elabore uma função que leia duas palavras do usuário e difa se elas são iguais ,diferentes ou se uma é prefixo da outra */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void f(char trecho[],char palavra[]){
    int numi=strlen(trecho);
    int numj =strlen(palavra);
    int cont =0;
    for(int i=0;i<=numi-numj;i++){
        cont=0;
        for(int j=0;j<numj;j++){
            if(trecho[i+j]==palavra[j]){
                cont++;
            }else{
                cont=0;
            }
        }
        if(cont==numj){
            printf("palavra encontrada");
            break;
        }
        
    }
    if(cont!=numj)
        printf("palavra não encontrada");
    
}
int main(){
    char palavra[100];
    char trecho[100];
    fgets(palavra,100,stdin);
    palavra[strcspn(palavra,"\n")]='\0';

    fgets(trecho,100,stdin);
    trecho[strcspn(trecho,"\n")]='\0';

    f(trecho,palavra);

}