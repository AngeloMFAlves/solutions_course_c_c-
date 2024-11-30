#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2;
    printf("Digite dois valores:\n");
    scanf("%d,%d", &numero1, &numero2);
    int soma = (numero1 + numero2);
    if (soma < 10){
        printf("A soma dos valores (%d) e (%d) eh igual a (%d), que eh menor que 10", numero1, numero2, soma);
    }else if (soma == 10){
        printf("A soma dos valores (%d) e (%d) eh exatamente igual a 10", numero1, numero2, soma);
    }else{
        printf("A soma dos valores (%d) e (%d) eh igual a (%d), que eh maior que 10", numero1, numero2, soma);
    }
}
