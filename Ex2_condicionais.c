#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2;
    printf ("Digite o primeiro numero:\n");
    scanf ("%d", &numero1);
    printf ("Digite o segundo numero:\n");
    scanf ("%d", &numero2);
    if (numero1 > numero2){
        printf("O primeiro numero digitado eh o maior.\n");
    }else if(numero1 == numero2){
        printf("Os numeros sao iguais.\n");
    }else{
        printf("O segundo numero digitado eh o maior.\n");
    }
}
