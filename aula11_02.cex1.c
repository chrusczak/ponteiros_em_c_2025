// alocação dinamica , 
/*
ÁREA DE MEMÓRIA DISPONÍVEL E AINDA N UTILIZADA = HEAP

stdlib.h , malloc , calloc ,realloc , free

função malloc


*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;

    // Aloca memoria para 5 inteiros
    ptr = (int*)malloc(5* sizeof(int));
if(ptr==NULL){

    printf("Falha na alocação de memória \n");
    return 1;
}
//usando a memória alocada 
for(int i=0;i<5;i++){
    ptr[i] = i *10;
    printf("%d ",ptr[i]);
}
//liberando memória
free(ptr);
return 0;

}