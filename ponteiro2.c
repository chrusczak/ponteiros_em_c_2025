#include <stdio.h>
//ponteiro para char 
int main(){
char letra ='A';
char *ptr = &letra; //Ponteiro para char 

printf("Endereço da letra : %p\n",ptr);
printf("Valor de letra via ponteiro %c\n",*ptr);

*ptr = 'Z'; // modidicando o valor via ponteiro
printf("Novo valor de letra %c\n",letra);

return 0;


}