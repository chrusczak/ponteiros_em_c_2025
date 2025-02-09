#include <stdio.h>

/*
void trocar(int *var1, int *var2){
var1=var1+var2;
var2=var1*2;
//observar dps
}
int main(){
int var1,var2;
int *ptr1=&var1 ,*ptr2=&var2;
printf("digite um numero: ");
scanf("%d",&var1);
printf("digite um numero: ");
scanf("%d",&var2);
printf("var1: %d \n var2:%d",var1,var2);
trocar(ptr1,ptr2);
printf("var1: %d \n var2:%d",var1,var2);

}*/
void  trocar(int *x,int *y){
    int temp = *x;// armazena o valor de x em temp
    *x=*y; // atribui o valor de y para x
    *y=temp; // atribui o valor de temp para y

}
int main(){
    int a=10,b=20;
    printf("Antes da troca a = %d,b = %d\n ",a,b);
    trocar(&a,&b);
    printf("Depois da troca: a=%d, b=%d \n",a,b);
}