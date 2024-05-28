#include <stdio.h>

float Cal(float bo, float ba)
{
    float media = (bo + ba) /2;
    return media;
}

int main()
{
    float bo;
    float ba;
    

    printf("-------------------- Calculadora de medias --------------------\n");

    printf("Ola digite a sua primeira nota: ");
    scanf("%f", &bo);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &ba);

    float media = Cal(bo, ba);

    printf("A sua media sera %.1f", media);

    return 0;
}
