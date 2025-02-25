#include <stdio.h>
#include <stdlib.h>
void ler_mat(int mat[][10],int linha,int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
int main(){
int linhas =3;
int coluans =2;
int mat[10][10];
ler_mat(mat,linhas,coluans);
}