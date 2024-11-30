#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, numero3;
    printf ("Digite um numero:\n");
    scanf ("%d", &numero1);
    printf ("Digite um numero:\n");
    scanf ("%d", &numero2);
    printf ("Digite um numero:\n");
    scanf ("%d", &numero3);
    if (numero1>10 && numero2>10 && numero3>10){
        printf ("Os tres numeros sao maiores que 10!\n");
    }else{
        printf("Algum dos numeros eh menor que 10!\n");
    }
}

