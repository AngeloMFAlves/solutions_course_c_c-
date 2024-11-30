#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2;
    printf ("Digite os DOIS numeros INTEIROS:\n");
    scanf ("%d,%d", &numero1, &numero2);
    int soma = (numero1 + numero2);
    if ((soma%2 == 0) && (soma < 10 && soma > 0)){
        printf ("A soma (%d) satisfaz ambas as condicoes.\n", soma);
    }else if ((soma%2 == 0) || (soma < 10 && soma > 0)){
        printf ("A soma (%d) satisfaz alguma das condicoes.\n", soma);
    }else{
        printf ("A soma nao satisfaz nenhuma das condicoes.\n");
    }
    return 0;
}
