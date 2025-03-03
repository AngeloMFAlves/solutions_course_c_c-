#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale("LC_ALL", "");
    int a, b, c;
    printf("Digite os três valores que você deseja saber o produto:\n");
    scanf("%d,%d,%d", &a,&b,&   c);
    int produto = a*b*c;
    printf("O resultado é:%d\n", produto);
    return 0;
}
