#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /// para usar acentos
    setlocale(LC_ALL, "");

    /// criando um algoritmo que leia dois valores e tire a media deles
    float nota1, nota2;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    printf("A media dos valores eh igual a %f:\n", (nota1+nota2)/2);
}
