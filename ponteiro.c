#include <stdio.h>
//ponteiro para float 
int main(){
float num= 5.75;
float *ptr = &num; //ponteiro para float
printf("Endereço de num : %p \n",ptr);
printf("Valor de um num via ponteiro: %.2f \n",*ptr);
*ptr=10.25;
printf("Novo valor de num %.2f \n",num);

return 0;

}