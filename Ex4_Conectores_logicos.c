#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro1, inteiro2;
    printf ("Digite dois valores INTEIROS:\n");
    scanf ("%d, %d", &inteiro1, &inteiro2);
    if ((inteiro1%2==0)||(inteiro2%2==0)){
        printf ("Um dos numeros dados eh par");
    }else{
        printf ("Nenhum dos numeros dados eh par");
    }
    return 0;
}
