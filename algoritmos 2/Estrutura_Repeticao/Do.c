#include <stdio.h>

int main (){

    int numero=0;
    int parar=0; 
    int soma=0;

do{

    printf("Digite um numero:  ");
    scanf("%d", &numero);

    soma += numero;

    printf("Digite 0 para continuar e 1 para parar:  ");
    scanf("%d", &parar);

} while (parar==0);

printf("O resultado da soma sera: %d", soma);

}