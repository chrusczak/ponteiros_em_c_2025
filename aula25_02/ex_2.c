#include <stdio.h>
#include <stdlib.h>

int main(){
int linha= 3,coluna =3;
int **mat = (int **) malloc(sizeof(int *));
for(int i=0;i<linha;i++){
    mat[i] = (int*) malloc(sizeof(int));
}




for(int i=0;i<linha;i++){
    free(mat[i]);
}
free(mat);

}