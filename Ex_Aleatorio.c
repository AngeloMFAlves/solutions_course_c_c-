#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL)); //pega o time do PC como semente
    int dado1, dado2, dado3;
    int maximo = 6; //definindo o valor maximo
    int minimo = 1; //definindo o valor minimo
    dado1 = (rand()%(maximo-minimo+1))+minimo; //garanto que vou estar no range entre 1 e 6, com os extremos incluidos
    dado2 = (rand()%(maximo-minimo+1))+minimo;
    dado3 = (rand()%(maximo-minimo+1))+minimo;
    int soma_dados = (dado1 + dado2 + dado3); //definindo a soma
    printf("Os numeros que sairam nos dados foram (%d), (%d) e (%d).\n", dado1, dado2, dado3); //printa o valor dos dados
    printf("E a soma entre eles eh %d.\n", soma_dados); //printa a soma
    return 0;
}
