/*Exercício: Gerenciamento de Biblioteca (Vale 0,5 na prova) 
Você deve criar um programa em C para gerenciar um acervo de livros de uma biblioteca. O 
programa deve permitir: 
1. Cadastrar novos livros. 
2. Listar todos os livros cadastrados. 
3. Buscar um livro pelo título. 
4. Atualizar a quantidade de exemplares de um livro. 
5. Sair do programa. 
Requisitos: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM 100

struct Livro{
    int id;
    char titulo[100];
    char autor[100];
    int anoPublicacao;
    int quantidadeExemplares;

};
void lbuf(){
    int c;
    while((c=getchar())!=EOF && c != '\n');
}
//2. Funções obrigatórias: 
void cadastrarLivro(struct Livro *livros, int *totalLivros){//Cadastra um novo livro. 
    //cadastro titulo
    printf("\ndigite o titulo do livro: ");
    fgets(livros[*totalLivros].titulo,sizeof(livros[*totalLivros].titulo),stdin);
    livros[*totalLivros].titulo[strcspn(livros[*totalLivros].titulo,"\n")]='\0';

    //cadastro autor
    printf("\ndigite o autor do livro: ");
    fgets(livros[*totalLivros].autor,sizeof(livros[*totalLivros].autor),stdin);
    livros[*totalLivros].autor[strcspn(livros[*totalLivros].autor,"\n")]='\0';

    //cadastro ano de publicação
    printf("digite o ano de publicação do livro");
    scanf("%d",livros[*totalLivros].anoPublicacao);
    lbuf();

    //cadastro quantidade de exemplares
    printf("digite a quantidade de exemplares do livro");
    scanf("%d",livros[*totalLivros].quantidadeExemplares);
    lbuf();
    // incrementando total livros e adicionando id
    *totalLivros++;
    livros[*totalLivros].id=*totalLivros;
    
}
void listarLivros(struct Livro *livros, int totalLivros){//Lista todos os livros cadastrados.
    printf("\n--------título------|--------autor--------|-ano-|-qtd-| id \n");
    for(int i=0;i<totalLivros;i++){
        printf("%20s | %20s | %4d  |%2d  | %d",livros[i].titulo,livros[i].autor,livros[i].anoPublicacao,livros[i].quantidadeExemplares,livros[i].id);
        printf("\n__________________________________________________________________________________\n");
    }
}
struct Livro* buscarLivroPorTitulo(struct Livro *livros, int totalLivros, char *titulo){//: Busca um livro pelo título (retorna 
//um ponteiro para o livro encontrado ou NULL se não existir). 
    char busca[100];
    char palavra[100];
    int cont=0;
    printf("\ndigite o titulo do livro: ");
    fgets(busca,sizeof(busca),stdin);
    busca[strcspn(busca,"\n")]='\0';
    for(int k=0 ;busca[k]!='\0';k++){
        busca[k]= toupper(busca[k]);
    }
    for(int i=0;i<totalLivros;i++){
        strcpy(palavra,livros[i].titulo);
        for(int j=0 ;palavra[j]!='\0';j++){
            palavra[j]= toupper(palavra[j]);
        }
        if(strncmp(livros[i].titulo,busca,strlen(busca)));
        printf("%20s | %20s | %4d  |%2d  | %d",livros[i].titulo,livros[i].autor,livros[i].anoPublicacao,livros[i].quantidadeExemplares,livros[i].id);
        printf("\n__________________________________________________________________________________\n");
        cont++;
    }
    if(cont==0){
        printf("\nnenhum exemplar localizado\n");
    }

}
void atualizarExemplares(struct Livro *livro){//: Atualiza a 
//quantidade de exemplares de um livro. 

}
int menu(){

}


int main(){
//3. Ponteiros: 
/*○ Use ponteiros para manipular os livros (por exemplo, ao buscar ou atualizar 
um livro). 
○ O acervo de livros deve ser armazenado em um array de structs alocado 
dinamicamente. 

*/
struct Livro *livros = (struct Livro*) malloc(NUM * sizeof(struct Livro));
int totalLivros = 0;
/*
4. Menu interativo: 
○ O programa deve exibir um menu para o usuário escolher entre as opções (1 
a 5). 
*/


}
