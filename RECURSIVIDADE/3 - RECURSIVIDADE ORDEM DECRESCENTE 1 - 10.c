/*Criar uma fun��o para imprimir os valores da sequ�ncia de 1 � 10 em ordem invertida, ou seja de 10 at� 1;**/

#include<stdio.h>

int ordemDecrescente(int x);

int main(){
    printf("Ordem Inversa: \n");
    int i = 10;
    ordemDecrescente(i);
    return 0;
}

int ordemDecrescente(int x){
    if(x >= 1){
        printf(" %d", x);
        ordemDecrescente(x-1);
    }
    else{
        return 0;
    }
}
