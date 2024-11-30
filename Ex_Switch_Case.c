#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;
    char operacao;
    printf("Digite os dois valores e a operacao desejada.\n");
    printf ("Atualmente, temos disponiveis duas operacoes: somar(+) e subtrair(-). Qual deseja?\n");
    scanf ("%d,%d,%c",&valor1, &valor2, &operacao);
    switch(operacao){
        case '+':
            printf("%d + %d eh igual a %d", valor1, valor2, (valor1+valor2));
            break;
        case '-':
            printf("%d - %d eh igual a %d", valor1, valor2, (valor1-valor2));
            break;
    }
    return 0;
}
