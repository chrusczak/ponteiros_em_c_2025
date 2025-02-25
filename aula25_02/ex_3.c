#include <stdio.h>
#include <stdlib.h>
struct tipo{
    char nome[100];
    int  id;
    float idade;
};
int main(){
    int c;
    int n;
    printf("digite quantas pessoas você quer adicionar");
    scanf("%d",&n);
    while((c=getchar())!= EOF && c != "\n");
    struct tipo *ptr =NULL;
    ptr = (struct tipo *) malloc(n*sizeof(struct tipo));
    
    for(int i;i<n;i++){
        printf("digite o seu nome");
        fgets(ptr[i].nome,100,stdin);
        printf("digite sua idade:");
        scanf("%f",&ptr[i].idade);
        while((c =getchar())!= EOF && c != "\n" );
        ptr[i].id=i+1;

    } 
    for(int i;i<n;i++){
        printf("nome %d : %s",i+1,ptr[i].nome);
        puts("");
        printf("idade %d : %1f ",i+1,ptr[i].idade);
        puts("");
        printf("id:%d ",ptr[i].id);
        puts("");
       
    }
    free(ptr);
}