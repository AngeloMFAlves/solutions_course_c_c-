#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int valor_1, valor_2;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor_1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &valor_2);
    printf("O valor absoluto da diferença entre os valores é: %d\n", abs(valor_1-valor_2));
}
