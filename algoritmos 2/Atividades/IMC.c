#include <stdio.h>

int main()
{
    float altura = 0;
    float peso = 0;

    printf("Ola sou um calculador de IMC \n");

    printf("Qual e o seu peso: ");
    scanf("%f", &peso);

    printf("Qual é a sua altura: ");
    scanf("%f", &altura);


    float qua = altura * altura;
    float IMC = peso / qua;

    if (IMC < 18.5)
    {
        printf("Voce esta com %.2f sendo um peso baixo", IMC);
    } else if (IMC > 18.4 && IMC < 25)
    {
        printf("Voce esta com um IMC de %.2f sendo o peso normal", IMC);
    } else if (IMC > 24.9 && IMC < 30)
    {
        printf("Voce esta com o IMC de %.2f sendo um peso maior que a media", IMC);
    } else if (IMC > 29.9 && IMC <35)
    {
        printf("Voce esta com o IMC de %.2f sendo o nivel obesidade I", IMC);
    } else if (IMC > 34.9 && IMC < 40)
    {
        printf("Voce esta com o IMC de %.2f sendo o nivel obesidade II", IMC);
    } else if (IMC > 39.9)
    {
        printf("Voce esta com o IMC de %.2f sendo o nivel obesidade III", IMC);
    }

    return 0;
}
