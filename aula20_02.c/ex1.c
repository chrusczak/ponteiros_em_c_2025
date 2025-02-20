#include <stdio.h>
#include <stdlib.h>
// criando matriz com ponteiros
int main(){
    int *p1  = NULL;
    int **p2 = NULL;
    
    int n ,m ;
    printf("insira o numero de linhas : ");
    scanf("%d",&n);
    getchar();
    printf("\ninsira o numero de colunas:  ");
    scanf("%d",&m);
    getchar();

    *p1= (int*) malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        **p2=(int**) malloc(m* sizeof(int));
        for(int j;j<m;j++){
            p2[j]=10*j+i;
        }
        p1[i]=p2;
    }




}
