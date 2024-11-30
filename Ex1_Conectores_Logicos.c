#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite um numero INTEIRO:\n");
    scanf("%d", &numero);
    if(numero>0 && numero<10){
        printf("O numero %d esta entre 0 e 10", numero);
    }else{
        printf("O numero %d esta fora do intervalo analisado", numero);
    }
}
