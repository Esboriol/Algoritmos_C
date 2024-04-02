#include <stdio.h>

int main()
{
    float altura = 0;
    float geladeira = 0;

    printf("\n Ola, sou um calculador de IMC (use ponto final ao inves da virgula).");
    printf("\n Qual e a sua altura? ");
    scanf("%f", &altura);

    printf("\n Qual e o seu peso? ");
    scanf("%f", &geladeira);

    float bagres =  altura * altura;
    float BABAIABA = geladeira / bagres;

    if (BABAIABA < 18.5)
    {
        printf("\n Voce esta muito magro.");
    } else if (BABAIABA > 18.6 && BABAIABA <24.9)
    {
        printf("\n Voce esta no peso ideal");
    } else if (BABAIABA > 25 && BABAIABA < 29.99)
    {
        printf("\n Voce esta sobrepreso");
    } else if (BABAIABA > 30 && BABAIABA < 34.9)
    {
        printf("\n Voce esta com obesidade 1");
    } else if (BABAIABA > 35 && BABAIABA < 39.9)
    {
        printf("\n Voce esta com obesidade 2");
    } else if (BABAIABA > 40)
    {
        printf("\n Voce esta com obesidade 3");
    }
    
    return 0;
}
