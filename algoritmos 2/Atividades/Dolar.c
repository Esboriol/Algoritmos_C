#include <stdio.h>

int main()
{
    float valor = 0;
    float dolar = 5.16;

    printf("Ola sou um convertor de dinheiro em dolar");

    printf("Qual o valor que voce deseja converter: ");
    scanf("%f", &valor);

    float total = valor * dolar;

    printf("O valor em dolar sera de %.2f", total);

    return 0;
}
