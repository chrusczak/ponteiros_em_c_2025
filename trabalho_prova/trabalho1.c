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
    int seletor;
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
    scanf("%d",&livros[*totalLivros].anoPublicacao);
    lbuf();

    //cadastro quantidade de exemplares
    printf("digite a quantidade de exemplares do livro");
    scanf("%d",&livros[*totalLivros].quantidadeExemplares);
    lbuf();
    // incrementando total livros e adicionando id
    
    livros[*totalLivros].id=(*totalLivros)+1;
    livros[*totalLivros].seletor=0;
    (*totalLivros)++;
}
void listarLivros(struct Livro *livros, int totalLivros){//Lista todos os livros cadastrados.
    printf("\n|--------título-------|--------autor--------|---ano-|-qtd| id \n");
    for(int i=0;i<totalLivros;i++){
        printf("%20s | %20s | %4d  |%2d  | %d",livros[i].titulo,livros[i].autor,livros[i].anoPublicacao,livros[i].quantidadeExemplares,livros[i].id);
        printf("\n__________________________________________________________________________________\n");
    }
}
struct Livro* buscarLivroPorTitulo(struct Livro *livros, int totalLivros, char *titulo, int *qtd){//: Busca um livro pelo título (retorna 
//um ponteiro para o livro encontrado ou NULL se não existir). 
    struct Livro *amostra = (struct Livro*) malloc(totalLivros * sizeof(struct Livro));
    int cont=0,cont2=0,cont3=0;
    char palavra1[100];
    char palavra2[100];
    for(int j=0;titulo[j]!='\0';j++){
        palavra1[j]=toupper(titulo[j]);
        cont2++;
    }
    palavra1[cont2]='\0';
    
    for(int i =0;i<totalLivros;i++){
        cont3=0;
        for(int k=0;livros[i].titulo[k]!='\0';k++){
            palavra2[k]=toupper(livros[i].titulo[k]);
            cont3++;
        }
        palavra2[cont3]='\0';
        if(strncmp(palavra1,palavra2,strlen(palavra1))==0){
            amostra[cont]=livros[i];
            amostra[cont].seletor=1;
            cont++;
        }
    }
    *qtd=cont;
    return amostra;
    
}
void atualizarExemplares(struct Livro *livros){//: Atualiza a 
//quantidade de exemplares de um livro. 
    int id,novo;
    printf("\ndigite o id do livro que vc gostaria de atualizar: ");
    scanf("%d",&id);
    lbuf();
    printf("\nexemplar selecionado: ");
    int i= id-1;
    printf("\n|--------título-------|--------autor--------|---ano-|-qtd| id \n");
    printf("%20s | %20s | %4d  |%2d  | %d",livros[i].titulo,livros[i].autor,livros[i].anoPublicacao,livros[i].quantidadeExemplares,livros[i].id);
    printf("\n digite a nova quantidade: ");
    scanf("%d",&novo);
    lbuf();
    printf("\natualizando\n");
    livros[i].quantidadeExemplares=novo;
    printf("\n|--------título-------|--------autor--------|---ano-|-qtd| id \n");
    printf("%20s | %20s | %4d  |%2d  | %d",livros[i].titulo,livros[i].autor,livros[i].anoPublicacao,livros[i].quantidadeExemplares,livros[i].id);

}
int menu(){
    printf("------MENU PRINCIPAL----");
    int opcao;
    printf("\n\t1. Cadastrar novos livros. \n\t2. Listar todos os livros cadastrados. \n\t3. Buscar um livro pelo título. \n\t4. Atualizar a quantidade de exemplares de um livro. \n\t5. Sair do programa. ");
    printf("\nescolha uma opção: ");
    scanf("%d",&opcao);
    lbuf();
    return opcao;

}


int main(){
//3. Ponteiros: 
/*○ Use ponteiros para manipular os livros (por exemplo, ao buscar ou atualizar 
um livro). 
○ O acervo de livros deve ser armazenado em um array de structs alocado 
dinamicamente. 
    int id;
    char titulo[100];
    char autor[100];
    int anoPublicacao;
    int quantidadeExemplares;

*/
int qtd=0;
char titulo[100];
struct Livro *livros = (struct Livro*) malloc(NUM * sizeof(struct Livro));
for(int i;i<NUM;i++){
    livros[i].seletor=0;
}
// registros do chat
livros[0] = (struct Livro){1, "Livro A", "Autor A", 2000, 10};
livros[1] = (struct Livro){2, "Livro B", "Autor B", 2001, 5};
livros[2] = (struct Livro){3, "Livro C", "Autor C", 2002, 8};
livros[3] = (struct Livro){4, "Livro D", "Autor D", 2003, 12};
livros[4] = (struct Livro){5, "Livro E", "Autor E", 2004, 3};

if(livros==NULL){
    printf("Erro ao alocar memória!\n");
    return 1;
}
struct Livro *temp =NULL;
int totalLivros = 5;

int log =1;
do{
    switch(menu()){
        case 1:
            cadastrarLivro(livros,&totalLivros);
            break;
        case 2:
            listarLivros(livros,totalLivros);
            break;
        case 3:
            printf("\ndigite um titulo: ");
            fgets(titulo,sizeof(titulo),stdin);
            titulo[strcspn(titulo,"\n")]='\0';
            temp=buscarLivroPorTitulo(livros, totalLivros,titulo,&qtd);
            printf("\n|--------título-------|--------autor--------|---ano-|-qtd| id \n");
            for(int i =0;i<qtd;i++){
                if(temp[i].seletor==1){
                    printf("%20s | %20s | %4d  |%2d  | %d",temp[i].titulo,temp[i].autor,temp[i].anoPublicacao,temp[i].quantidadeExemplares,temp[i].id);
                    printf("\n__________________________________________________________________________________\n");
                }
            
            }
            if(qtd==0){
                
                printf("\nnenhum exemplar encontrado\n");
                printf("________________________________\n");
            }
            free(temp);
            break;
        case 4:
            atualizarExemplares(livros);
            break;
        case 5: 
            log=0;
            break;
        default:
            printf("numero inválido,tente novamente");
    }
}while(log);
free(livros);
free(temp);
/*
4. Menu interativo: 
○ O programa deve exibir um menu para o usuário escolher entre as opções (1 
a 5). 
*/


}
