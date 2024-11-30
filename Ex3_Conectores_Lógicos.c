#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro1, inteiro2;
    printf ("Digite dois valores INTEIROS para que o programa possa fazer a comparacao!\n");
    scanf ("%d, %d", &inteiro1, &inteiro2);
    if (inteiro1>10 || inteiro2>10){
        printf ("Um dos valores inteiros eh maior que 10\n");
    }else{
        printf ("Nenhum dos valores eh maior que 10\n");
    }
    return 0
}
