#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf ("Digite um numero que testarei se ele eh par ou nao:\n");
    scanf ("%d", &numero);
    if (numero%2 == 0){
        printf ("O numero %d eh par!", numero);
    } else{
        printf ("O numero %d eh impar!", numero);
    }
}
