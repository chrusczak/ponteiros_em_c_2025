#include <stdio.h>

void dobro(int *num){
*num*=2;
}
int main(){
    int num;
    printf("insira um valor ");
    scanf("%d",&num);
    printf("numero : %d",num);
    dobro(&num);
    printf("numero : %d",num);
}