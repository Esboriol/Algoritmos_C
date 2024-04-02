#include <stdio.h>

int main()
{
    float graus = 0;

    printf("\n Ola, sou um convertor de Celsius para Fahrenheit.");
    printf("\n Qual o valor da temperatura em Celsius? ");
    scanf("%f", &graus);

    float Firehitos = graus * 1.8;
    float Real = Firehitos + 32;

    printf("\n O valor em Fahrenheit sera %.2f", Real);

    return 0;
}